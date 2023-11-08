#include <stdio.h>

struct student{
    char name[58];
    char roll[7];
    int reg;
    int sem;
    float cgpa;
} s;

    int main(){
        printf("---Enter Information---\n");
        printf("Enter Student Name:");
        fgets(s.name,sizeof(s.name),stdin);

        printf("Enter Enrollment number: ");
        scanf("%s", &s.roll);
        printf("Enter Registration number: ");
        scanf("%d",&s.reg);
        printf("Enter Semester:  ");
        scanf("%d", &s.sem);
        printf("Enter CGPA: ");
        scanf("%f",&s.cgpa);

        printf("***Displaying Student Information***\n");
        printf("Student name:");
        printf("%s",s.name);
        printf("Enrollment Number: %s ",s.roll);
        printf("\nRegistration Number: %d ",s.reg);
        printf("\nSemester: %d ",s.sem);
        printf("\nCGPA: %2f ",s.cgpa);
    }
