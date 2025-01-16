#include<stdio.h>
int main()
{

    int arr[5]={3,56,67,9,3};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for (int i=0;i<n;i++){
        int current=arr[i];
        int sorted=i-1;
        printf("sorted before value=%d\n",sorted);
        while(sorted>=0 && arr[sorted]>current)
        {
            arr[sorted+1]=arr[sorted];
            printf("sort val in loop=%d\n",sorted);
            sorted=sorted-1;
        }
        printf("sorted after value=%d\n",sorted);
        arr[sorted+1]=current;
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }    
return 0;
}
