#include<stdio.h>

int main()
{
int a,b;

     printf("\n Enter any two integers\n");

     scanf("%d\n%d",&a,&b);
     printf("You entered\n%d\n%d",a,b);

a=a+b;
b=a-b;
a=a-b;
     printf("\nAfter swapping \n%d\n%d\n",a,b);
return 0;
}
