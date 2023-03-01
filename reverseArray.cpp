//Reversing an array 

#include<iostream>
using namespace std;
class List
{
	int arr[20],n;
	public:
		List()
		{
			cout << "Enter the number of array elements: ";
			cin >> n;
		}
		void reverse();
};
void List::reverse()
{
	int i,k;
	cout << "Enter the array elements: " << endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "The Array:\n";
	for(k=0;k<n;k++)
	{
		cout << arr[k] << " ";
	}
	cout << "\nThe Reversed Array:" << endl;
	for(i=n-1;i>=0;i--)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	List ob; 
	ob.reverse();
	return 0;
}
