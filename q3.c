#include <stdio.h>
struct student {
    char name[50];
    char roll[7];
    int reg;
    int sem;
    float cgpa;
} s;

int main() {
    printf("---Enter Information---\n");
    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Enrollment number: ");
    scanf("%s", s.roll);
    printf("Enter Registration number: ");
    scanf("%d", &s.reg);
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);
    printf("Enter Semseter: ");
    scanf("%d", &s.sem);

    printf("***Displaying Student Information***\n");
    printf("Student Name: ");
    printf("%s", s.name);
    printf("Enrollment Number: %s\n", s.roll);
    printf("Registration Number: %d\n", s.reg);
    printf("Cgpa: %.2f\n", s.cgpa);
    printf("Semester: %d\n", s.sem);

    return 0;
}
