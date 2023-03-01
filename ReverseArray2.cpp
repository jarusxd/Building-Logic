//Reverse a given array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"Enter a num: ";
	cin>>n;
	int a[n];
	cout<<"Array: ";
	for(int k=0;k<n;k++)
	{
		cin>>a[k];
	}
	int size=sizeof(a)/sizeof(a[0]);
	int j=size-1;
	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
	for(i=0;i<size;i++)
	cout<<a[i]<<" ";
	return 0;
}
