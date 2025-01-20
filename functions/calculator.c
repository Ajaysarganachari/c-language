#include<stdio.h>

void calculator();
int x=5;
int y=10;
char opr;

int main(){
void calculator();
    printf("enter the *\n");
    printf("enter the +\n");
    printf("enter the -\n");
    printf("enter the /\n");
    printf("enter the operator:");
    scanf("%c",&opr);
    switch (opr)
    {
        case ('*'):{
            printf("multiplication of=%d\n",(x*y));
        }
        break;
        case ('+'):{
            printf("addition=%d\n",(x+y));
        }
        break;
        case ('-'):{
            printf("substraction=%d\n",(x-y));
        }
        break;
        case ('/'):{
            printf("division=%d\n",(x/y));
        }
        break;
        default:
        {
            printf("invalid input");
        }
    }

}
