#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int Num,i;
    int tm=0;
    char name[100];
    srand(time(NULL));
    int Rn = rand() % 100 + 1;
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Hello,%s Wellcome to Guessing number game. \n",name);
    printf("%s guess number between 1 to 100 \n",name);
    
    
    do 
{
        printf("Enter your guess: ");
        scanf("%d", &Num);
        tm++;
    
    if(Rn>Num)
    printf("Your high!!\n");
    
    else if(Rn<Num)
    printf("Your low!!\n");
    
    else
    printf("Ohh %s your correct",name);
        
} 
    while (tm!=5);
    printf("Better luck next time %s ",name);
    exit(0);

    
}
