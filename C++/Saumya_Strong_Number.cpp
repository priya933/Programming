
include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout<<"Enter a number by user : ";
	cin>>n;
	int n1=n;
	while(n1)
	{
		int num=n1%10;
		int fact = 1;
		for(int i=num;i>0;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		n1/=10;
	}
 	if(sum==n )
	{
		cout<<n<<"This is a Strong Number";
	}
	else
	{
		cout<<n<<" This  is not a Strong Number";
	}
 
	return 0;
}
