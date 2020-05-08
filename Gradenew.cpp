#include <stdio.h>
main()
{
int n;
printf("Enter the Marks\n");
scanf("%d",&n);
if(n>=85 && n<=100)
{
printf("Grade A");
}
else if(n>=70 && n<=84)
{
printf("Grade B");
}
else if(n>=55 && n<=69)
{
printf("Grade c");
}
else if(n>=40 && n<=54)
{
printf("Grade D");
}
else if(n>=00 && n<=39)
{
printf("Grade F");
}
}

