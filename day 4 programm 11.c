#include <stdio.h>
struct student
{
    char name[50];
    int id;
    float gpa;
};
int main()
{
    struct student s; 
 printf("Enter The Information of Students :\n\n"); 
 printf("Enter Name : ");
    scanf("%s",s.name); 
 printf("Enter id. : ");
    scanf("%d",&s.id);  
    printf("Enter gpa : ");
    scanf("%f",&s.gpa);
    printf("\nDisplaying Information\n");
 printf("Name: %s\n",s.name);
    printf("id: %d\n",s.id);
    printf("gpa: %.2f\n",s.gpa);
    return 0;
}
