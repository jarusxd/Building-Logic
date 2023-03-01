//Reversing an integer

#include<iostream>
using namespace std;
class Rev{
	public:
	void reverse(int x){
	long ans=0;
	while(x!=0)
	{
		int d=x%10;
		ans=(ans*10)+d;
		x=x/10;
	}
		cout << ans;
	}
};
int main()
{
	Rev r;
	int x; 
	cout<<"Enter a Number: ";
	cin>>x;
	r.reverse(x);
}
