#include<stdio.h>
#include<string.h>
int main()
{
char name[50];
printf("INPUT YOUR FULL NAME " );
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = 0;
printf("HELLO %s fuck you",name);


return 0;


}