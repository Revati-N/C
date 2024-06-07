#include<stdio.h>
#include<stdlib.h>

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        int swap = a[i];
        a[i] = a[largest];
        a[largest] = swap;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    int i;

    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (i=n-1; i>=0; i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}

void main()
{
    int a[100], n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d", &a[i]);
    }

    heapSort(a, n);

    for(i=0; i<n; i++)
    {
        printf("%d\n ", a[i]);
    }

}
