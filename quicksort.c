#include <stdio.h>
#include <stdlib.h>


void swap(int a[],int b,int c)
{
	int temp=a[b];
	a[b]=a[c];
	a[c]=temp;
}
void quicksort(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1,j=low+1;
	while(j<=high)
	{
		if (a[j]>pivot)
		{
			j++;
		}
		else
		{
			swap(a,i,j);
			i++;
			j++;
		}

	}
	swap(a,low,i-1);
	if(high-low>=2)
	{
	    quicksort(a,low,i-2);
	    quicksort(a,i,j-1);
	    
	}

	
	
	
}
int main()
{
	int a[10];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	
	for (i=0;i<n;i++)
	{
	     printf("%d\t",a[i]);
	}
  return 0;
}
