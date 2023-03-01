#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Total no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"ARRAY=> ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int size=sizeof(arr)/sizeof(arr[0]);
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	cout<<"The XOR element: "<<ans<<endl;
	return 0;
}
