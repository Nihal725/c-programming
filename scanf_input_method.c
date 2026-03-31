#include<stdio.h>
int main()
{
int number_1, number_2;
printf("\nplease enter 1st number:");
scanf(" %d", &number_1);

printf("\nplease enter 2nd number:");
scanf(" %d", &number_2);

printf("\nI HAVE PRESSED: %d AND %d\n",number_1,number_2);

float num1,num2;
printf("\nENTER 2 FLOTING NUMBER:");
scanf("%f %f", &num1, &num2);
printf("i have pressed : %.3f and %.4f", num1, num2);


int AGE;
float height;

printf("\nMy age and height is:");
scanf("%d %f",&AGE,&height);

printf("my age is %d\nmy height is %.1f",AGE,height);
return 0;
}
