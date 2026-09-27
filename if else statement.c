#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Tickets are given");
    }
   else
   {
    printf("Tickets are not given ");
   }
   return 0;
}