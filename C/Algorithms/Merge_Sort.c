#include<stdio.h>
#include<stdlib.h>

void joint(int a[], int f, int s, int t)
{
    int temp[100], i = f, j = s, k = -1, w;
    while(i < s && j <= t)
    {
        if(a[i] < a[j])
        {
            k++;
            temp[k] = a[i];
            i++;
        }
        else
        {
            k++;
            temp[k] = a[j];
            j++;
        }
    }
    while(i < s)
    {
        k++;
        temp[k] = a[i];
        i++;
    }
    while(j <= t)
    {
        k++;
        temp[k] = a[j];
        j++;
    }
    for( w =  0; w <= k; w++)
    {
        a[f+w] = temp[w];
    }
}

void merge(int a[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r - l) /  2;
        merge(a, l, m);
        merge(a, m +  1, r);
        joint(a, l, m +  1, r);
    }
}

int main()
{
    int a[100], n, i;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i =  0; i < n; i++)
    {
        printf("Enter No.: ");
        scanf("%d", &a[i]);
        printf("\n");
    }
    merge(a,  0, n -  1);
    for(i =  0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return  0;
}
