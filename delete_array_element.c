#include <stdio.h>

int main() {
int size,num,i,j,count=0;
    printf("Enter the number");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<=size-1;i++)
        scanf("%d",&arr[i]);
    printf("Enter the numeber you want to delete");
    scanf("%d",&num);
    for(i=0;i<size-1;i++)
        if(arr[i]==num)
        {
            count++;
    for(j=i;j<size;j++){
        arr[j]=arr[j+1];
    }
    i--;
    }
    if(count==0)
        printf("Not found.");
    else
        for(i=0;i<size-count;i++)
            printf("%d ",arr[i]);
           
    return 0;
}
