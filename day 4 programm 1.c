#include <stdio.h>
struct person
{
	char name[50];
   int age;
   float height;
}
main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   
    printf("Enter name: ");
    printf("Enter age: ");
    scanf("%d",& personPtr->age);
    printf("Enter height: ");
    scanf("%f", &personPtr->height);
    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->height);
}
