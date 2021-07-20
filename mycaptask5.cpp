#include<iostream>
using namespace std;

bool PrimeCheck(int n);

int main()
{
	int num,a;
	bool check = false;
	
	cout<<"\t ======== Welcome! ========="<<endl;
	cout<<"\t\n Please enter a random number here: ";
	cin>>num;
	
	for (a=2; a<=num/2; a++) 
	{
			if((PrimeCheck(num-a))&&(PrimeCheck(a)))
			{
				cout<<"\n "<<num<< " = "<< num-a << " + " <<a<<endl;
				check = true;
			}
	}
	if ( check = false )
	{
		cout<<"\n\t The given number "<<num<<" cannot be written as a sum of two prime numbers.";
	}
	return 0;
} 

bool PrimeCheck(int n)
{
	int i;
	bool Prime = true;
	
	if ( n == 0 || n == 1)
	{
		Prime = false;
	} 
	else 
	{
		for	( i = 2 ; i <=n/2 ; i++ )
		{
			if ( n % i == 0)
			{
				Prime = false;
				break;
			}
		} 
	} 
	return Prime;
}
