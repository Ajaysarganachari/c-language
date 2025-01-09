#include<stdio.h>
int main()
{//
    //int i=1;
    //do{
  //   printf("%d\n",i);
     //i++;
//    }while (i<=10);//
     int selectors;
     do{
        printf("select option 1 to buy\n");
        printf("select option 2 to remove\n");
        printf("select option 3 to check\n");
        printf("select the option:");
        scanf("%d",&selectors);
        switch (selectors){
            case 1:{
                printf("item bought\n");
            }
            break;
              case 2:{
                printf("item removed\n");
            }
            break;
              case 3:{
                printf("item checked\n");
            }
            break;
            default:{
                printf("invalid user");
            }
        }
     }while(selectors!=3);



    return 0;
}
