#include <stdio.h>

int main() {
int n,i;
    printf("Enter The Number");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
