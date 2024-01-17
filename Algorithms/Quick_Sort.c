#include<stdio.h>
#include<stdlib.h>

void main()
{
   int a[100],n,i;
   printf("Enter number of elements in the array: ");
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {
       printf("Enter a value: ");
       scanf("%d",&a[i]);
   }
   quicksort(a,0,n-1);
   printf("Sorted array is: \n");
   for(i=0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }
}

void quicksort(int a[], int l, int r)
{
   int p;
   if(l<r)
   {
       p=partition(a,l,r);
       quicksort(a,l,p-1);
       quicksort(a,p+1,r);
   }
}

int partition(int a[], int l, int r)
{
   int i,j,t,x;
   i = l;
   j = r;
   x = a[l];
   while(i<j)
   {
      while(a[i]<= x)
      {
         i++;
      }
      while(a[j]>x)
      {
          j--;
      }
      if(i<j)
      {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
      }
   }
   t=a[l];
   a[l]=a[j];
   a[j]=t;
   return j;
}
