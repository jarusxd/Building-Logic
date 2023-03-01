//Binary Search

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,mid=0,start=0,flag=0,t;
	cout << "Enter the no of array elements: ";
	cin>>n;
	int a[n],end=n;
	cout<<"The array\n";
	for(int i=0;i<n;i++)			//array input by user
	{
		cin>>a[i];
	}
	cout << "enter the element to be searched ";
	cin>>t;
	while(start<=end)		//searching of the number
	{
		mid=start+(end - start)/2;	//finding the middle element
		if(a[mid]<t){			//when the middle element is smaller than the target increment the mid by 1 and store in start
			start=mid+1;
		}
		else if(a[mid]>t){		//when the middle element is greater than the target decrement the mid by 1 and store in end
			end=mid-1;
		}
		else{				//when the middle element matches with the target assign 1 to flag and break
			flag=1;
			break;
		}
	}
	if(flag==1)				//checking if flag is 1, print the output
	cout<<"the element is present at the index of "<<mid<<endl;
	else					//else no such element found
	cout<<"elements not present";
	return 0;
}
