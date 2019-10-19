#include<conio.h>
#include <stdio.h>
#include<stdio.h>


int main()
{
    int num,ch;
    printf("enter the  two digit number of your choice");
    scanf("%d",&num);
    while(ch!=2){
    printf("This is the following menu options\n");
    printf("----------1.Choose here for incrementing the number-----------------\n");
    printf("----------2.Choose here for decrementing the number-------------------\n");
    printf("----------3.EXIT THE PROGRAM----------------------------\n");
    printf("enter the choice");
    scanf("%d",&ch);
    
    switch(num) {
        case 1: {
            int res,fin;
            res=incr(num);
            fin=incr(res);
            printf("the incremented number is %d\n",res);
            break;
        }
        case 2:{
            int res,fin;
            res=decr(num);
            fin=decr(res);
            printf("the decremented number is %d\n",fin);
            break;
            
        }
        case 3:{
            exit(0);
            break;
        }
    }
    }       
    

    return 0;
}

int incr(int x)
{
     x=x+1;
     return x;
}
int decr(int x)
{
    x=x-1;
    return x;
}


