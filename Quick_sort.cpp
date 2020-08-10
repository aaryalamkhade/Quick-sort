#include<iostream>
using namespace std;
int partition(int arr[],int x,int y)
{
	int pivote=arr[x];
	int low=x+1;
	int high=y;
	
	while(low<=high)
	{   
		while(pivote<arr[low])
		{
	     low++;
		}
		while(pivote>arr[high])
		{
			high--;
		}
		if(low<=high)
		{
			int temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
		}
	}
	int temp=arr[high];
	arr[high]=arr[x];
	arr[x]=temp;
	
	return high;
}

int quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int p=partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}



int main()
{
	int n;
	cout<<"Enter the no of ele:";
	cin>>n;
	int arr[n];
	cout<<"Enter the array ele:";
	for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
quicksort(arr,0,n-1);
for(int i=0;i<n;i++)
{
	cout<<arr[i];
}

}
