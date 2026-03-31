#include<stdio.h>
#include<string.h>
int main ()
{
    char capital;
    printf("press any capital letter=");
    scanf("%c", &capital);
    printf("NIHAL,you have pressed %c",capital);
    
    char NAME[50]; //this is for a full word not for whole sentences
    printf("\nMY surname is:");
    scanf("%s",&NAME);
    printf("YOUR surNAME IS :%s",NAME);


    getchar();
    
    //lets code for my full name 
    char name[50];
    printf("\nMY full name is :");
    gets(name);
    printf("YOUR NAME IS :");
    puts(name);
    return 0;


}
