#include<stdio.h>

int main()
{
    int n,i,j,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the array values:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=1 ; j<n ; j++)
    {
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
    printf("After sorting the values the array is:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
