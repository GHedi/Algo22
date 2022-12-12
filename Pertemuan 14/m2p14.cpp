#include <iostream>
using namespace std;

int binarysearch(int arr[], int l , int r, int x)
{
	if(r >= 1){
		int mid=1+(r-1)/2;
		if (arr[mid]==x)
		return mid;
		if (arr[mid]>x)
		return binarysearch(arr, l, mid-1, x);
		return binarysearch(arr, mid+1, r, x);
	}
	return -1;
}

int main()
{
	int arr[]={2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarysearch (arr, 0, n-1, x);
	(result == 1)
		? cout<<"Element is not present in array"
		: cout<<"Element is present in index "<<result;
		return 0;
}
