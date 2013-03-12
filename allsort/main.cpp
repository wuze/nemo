/*
#include <stdio.h>

int num=0;

void Swap(char &a, char &b)
{
	char tmp;
	tmp = a;
	a=b;
	b=tmp;
}

void perm(char a[],int start,int end)
{

	if( start==end)
	{
		for(int i=0;i<=end;i++)
			printf("%c",a[i]);
		printf("\n");
		num++;
	}
	else
	{
		for(int i=start;i<=end;i++)
		{
			Swap(a[start],a[i]);
			perm(a,start+1,end);
			Swap(a[start],a[i]);
		}
	}
}

int main()
{
	char a[] = "abcd";
	perm(a,0,3);
	printf("\n%d\n",num);
	return 0;
}

*/

#include <stdio.h>

void print_arra(int *arr,int n)
{
	
}

void sort(int *arr, int start, int end)
{
	if(end<start) return ;

	int index=quik_sort(arr, start, end);
	sort(arr,start,index-1);
	sort(arr,index+1,end);
}

void quik_sort(int *arr, int start,int end)
{

	int i=start;
	int j=end+1;


	int x=arr[start];

	while(true)
	{
		while(arr[++i]<x);
		while(arr[--j]>x);
		if(i>=j)
			break;
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}


	arr[start]=arr[j];
	arr[j]=x;

	return j;

}