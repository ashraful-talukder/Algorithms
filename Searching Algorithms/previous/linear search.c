#include<stdio.h>

int main()
{
    int n,i,s=0,a;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the array values:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the value that you're searching: ");
    scanf("%d",&a);
    for(i=0 ; i<n ; i++)
    {
        if(A[i]==a)
        {
            printf("Found\nPosition: %d\n",s+1);
            return 0;
        }
        ++s;
    }
    printf("Your searching value is not in the array\n");
    return 0;
}
