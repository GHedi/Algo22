int main()
{
	int arr[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 46};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int x=12;
	int index = interpolationSearch(arr, n, x);
	
	if(index != -1)
	cout<<"Element found at index "<<index;
	else
	cout<<"Element not found.";
	return 0;

}
