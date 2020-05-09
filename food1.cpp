#include<stdio.h>
int main()
{
printf("Pick an item:\n1.Food Item-Pizza\n  Price-Rs239\n2.Food Item-Burger\n  Price-Rs129\n3.Food Item-Pasta\n  Price-Rs179\n4.Food Item-French Fries\n  Price-Rs99\n4.Food Item-Sandwich\nPrice-Rs149\n");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("You picked Food Item-Pizza\nPrice-Rs239");
break;
case 2:
printf("You picked Food Item-Burger\nPrice-Rs129");
break;
case 3:
printf("You picked Food Item-Pasta\nPrice-Rs179");
break;
case 4:
printf("You picked Food Item-French Fries\nPrice-Rs99");
break;
case 5:
printf("You picked Food Item-Sandwich\nPrice-Rs149");
break;
default:printf("Invalid Choice");
}
}
