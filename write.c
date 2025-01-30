#include<stdio.h>
int main()
{
    FILE *fptr=fopen("file.txt","w");
    if(fptr!=NULL){
        printf("file exist\n");
    }
    else{
        printf("file does not exsit");
    }
    int vcnt=0;
    char istr[20]="hello world\n";
    for(int i=0;i<20;i++){
        if(istr[i]!=0){
            fputc(istr[i],fptr);
        }
        vcnt++;
    }
    if(vcnt==20){
        printf("write successful..");
    }else {
        printf("write fail..");
    }
    fclose(fptr);

    FILE *fptr1=fopen("file.txt","a");
    char istr1[20]=("fputs operation..\n");
    fputs(istr1,fptr1);
    fclose(fptr1);


    FILE *fptr2 = fopen("file.txt","a");
    int roll_no=4;
    char name[20]="sahil";
    char branch[21]="Computer Science";
    fprintf(fptr,"%d %s %s",roll_no,name,branch);
    fclose(fptr);
    return 0;
}
