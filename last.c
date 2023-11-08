#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* root=NULL;

void display()
{
	struct node* temp;
    if (root == NULL)
		printf("\nList is empty\n");
    else {
		temp = root;
		while (temp != NULL) {
			printf("%d->", temp->data);
			temp = temp->next;
		}
		printf("NULL");
	}
}

void insertAtFront()
{
    int data;
    struct node* temp;
    temp=malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&data);
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=root;
    root->prev=temp;
}

void insertAtEnd()
{
    int data;
    struct node* temp, *ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&data);
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    ptr=root;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->prev=ptr;
}

void insertAtPosition()
{
    struct node* temp, *newP, *temp2;
    int loc;
    printf("\nEnter location: ");
    scanf("%d",&loc);
    newP=(struct node*)malloc(sizeof(struct node));
    temp=(struct node*)malloc(sizeof(struct node));
    temp2=(struct node*)malloc(sizeof(struct node));
    temp=root;
    while(loc!=1)
    {
        temp=temp->next;
        loc--;
    }
    if(temp->next==NULL)
    {
        temp->next=newP;
        newP->prev=temp;
    }
    else
    {
        temp2=temp->next;
        temp->next=newP;
        temp2->prev=newP;
        newP->next=temp2;
        newP->prev=temp;
    }
}

void deleteFirst()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=root;
    root=root->next;
    free(temp);
}

void deleteEnd()
{
    struct node* temp, *temp2;
    temp=(struct node*)malloc(sizeof(struct node));
    temp2=(struct node*)malloc(sizeof(struct node));
    temp=root;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    temp=NULL;
}

void deleteAtPosition()
{
    struct node* temp, *temp2;
    temp=(struct node*)malloc(sizeof(struct node));
    temp2=(struct node*)malloc(sizeof(struct node));
    temp2=root;
    int loc;
    printf("\nEnter location: ");
    scanf("%d",&loc);
    while(loc>1)
    {
        temp=temp->next;
        loc--;
    }
    temp2=temp->prev;
    temp2->next=temp->next;
    temp->next->prev=temp2;
    free(temp);
    temp=NULL;
}


int main()
{
	int choice;
		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at starting\n");
		printf("\t3 For insertion at end\n");
		printf("\t4 For insertion at any position\n");
		printf("\t5 For deletion of first element\n");
		printf("\t6 For deletion of last element\n");
		printf("\t7 For deletion of element at any position\n");
		printf("\t8 To exit\n");
		
	while (1) {
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		

		switch (choice) {
	
		case 1:
			display();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deleteAtPosition();
			break;
		
		case 8:
			exist(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}