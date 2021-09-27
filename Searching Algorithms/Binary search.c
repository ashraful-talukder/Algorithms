#include<stdio.h>

int main()
{
    int n,i,a,low,high,mid;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the values of array:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the value you want to search: ");
    scanf("%d",&a);
    low=0;
    high=n-1;
    for(i=0 ; i<n ; i++)
    {
        mid=(int) ((low+high)/2);
        if(A[mid]==a)
        {
            printf("Found\n");
            return 0;
        }
        else if(A[mid]>a)
        {
            high=mid-1;
        }
        else if(A[mid]<a)
        {
            low=mid+1;
        }
        if(low>high)
        {
            break;
        }
    }
    printf("Your searching value is not found in the array\n");
    return 0;
}
