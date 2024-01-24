#include<stdio.h>
#include<stdlib.h>

void selection(int a[], int n)
{
    int i, j, p, t,min;
    for(i=0;i<=n-2;i++)
    {
        min = a[i];
        p = i;
        for(j=i+1; j<=n-1;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                p=j;
            }
        }
        t = a[i];
        a[i] = min;
        a[p] = t;
    }
}

void main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0; i<= n-1; i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    selection(a,n);
    for(i=0; i<= n-1; i++)
    {
        printf("%d\n",a[i]);
    }
}
