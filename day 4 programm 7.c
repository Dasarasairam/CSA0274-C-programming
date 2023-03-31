
#include <stdio.h>
struct employee{
    char    name[30];
    int     age;
    float   salary;
};
 
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("age:");            scanf("%d",&emp.age);
    printf("Salary :");        scanf("%f",&emp.salary);
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("age: %d"     ,emp.age);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
