#include<stdio.h>
int main()
{
    int percentage;
    printf("enter your percentage :");
    scanf("%d",&percentage);
    if (percentage>90&&percentage<=100){
        printf("percentage=%d your gradeis:A+",percentage);
    }
    else if(percentage>70 && percentage<=90){
        printf("percentage=%d your grade is A",percentage);
    }
    else if(percentage>60 && percentage<=70){
        printf("percentage=%d your grade is B+",percentage);
    }
    else if(percentage>50 && percentage<=60){
        printf("percentage=%d your grade is B",percentage);
    }
    else if (percentage>40 && percentage<=50){
        printf("percentage=%d your grade is C+",percentage);
    }
    else if (percentage>30 && percentage<=40){
        printf("percentage=%d your grade is C",percentage);
    }
    else {
        printf("percentage=%d congratulation you are in the previous class again");
    }

    return 0;
}
