#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[100],n,i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for ( i=0; i <= n-1; i++)
    {
        printf("Enter no.: ");
        scanf("%d", &a[i]);
    }
    insertion(a,n);
    for(i = 0; i<= n-1; i++)
    {
        printf("%d\n", a[i]);
    }
}

void insertion(int a[], int n)
{
    int i,j,t;
    for(i=1; i<=n-1;i++)
    {
        t = a[i];
        j = i;
        while(a[j-1]>t && j>0)
        {
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = t;
    }
}
