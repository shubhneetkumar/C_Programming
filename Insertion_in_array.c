#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int num,pos;
    printf("Enter the number");
    printf("Enter the position");
    scanf("%d%d",&num,&pos);
    int temp;
    for(int i=0;i<n;i++)
    {   temp=arr[i];
        if(i==pos-1)
        {arr[i]=num;
         break;}
    }
    for(int i=pos-1;i<n;i++)
    {
        int rem=temp;
        temp=arr[i+1];
        arr[i+1]=rem;
    }
    for(int i=0;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}