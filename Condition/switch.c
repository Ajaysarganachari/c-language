#include<stdio.h>
int main()
{
    printf("RO Water");
    printf("enter 5 rupee for 10ltr\n");
    printf("enter 10 rupee for 20ltr\n");
    printf("enter 15 rupee for 30ltr\n");
    printf("enter 20 rupee for 400ltr\n");
    printf("enter the amount :");
    int expr;
    scanf("%d",&expr);
    switch(expr){
        case 5:{
            printf("10ltr.\n");
            printf("enter a hot\n");
            printf("enter b cold\n");
            printf("enter c normal\n");
             printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
        switch(o){
                case 'a':{
                    printf("drop filtered water\n");
                }break;
                case 'b':{
                    printf("drop unfiltered water\n");
                }break;
                case 'c':{
                    printf("drop corporation water\n");
                }
                break;
                    default:{
                        printf("invalid input");
                    }
            }
    }
    break;
            case 10:{
            printf("10ltr.\n");
            printf("enter a hot\n");
            printf("enter b cold\n");
            printf("enter c normal\n");
             printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
        switch(o){
                case 'a':{
                    printf("drop filtered water\n");
                }
                break;;
                case 'b':{
                    printf("drop unfiltered water\n");
                }
                break;
                case 'c':{
                    printf("drop corporation water\n");
                }
                break;
                    default:{
                        printf("invalid input");
                    }
        }
                }

                break;
            case 15:{
            printf("10ltr.\n");
            printf("enter a hot\n");
            printf("enter b cold\n");
            printf("enter c normal\n");
             printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
        switch(o){
                case 'a':{
                    printf("drop filtered water\n");
                }break;
                case 'b':{
                    printf("drop unfiltered water\n");
                }break;
                case 'c':{
                    printf("drop corporation water\n");
                }
                break;
                    default:{
                        printf("invalid input");
                    }
        }
                }
                break;
            case 20:
            printf("10ltr.\n");
            printf("enter a hot\n");
            printf("enter b cold\n");
            printf("enter c normal\n");
             printf("enter the option:\n");
            char o,temp;
            scanf("%c",&temp);
            scanf("%c",&o);
        switch(o){
                case 'a':{
                    printf("drop filtered water\n");
                }break;
                case 'b':{
                    printf("drop unfiltered water\n");
                }break;
                case 'c':{
                    printf("drop corporation water\n");
                } 
                break;
                    default:{
                        printf("invalid input");
                                    }
        }
    
}
                        return 0;
}

     
