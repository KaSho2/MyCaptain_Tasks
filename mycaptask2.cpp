#include<iostream>
using namespace std;
int AgeVerif(int& a);
int main()
{
	int age;
	cout<<"\t Welcome for Age Verification in voting!"<<endl;
	cout<<"\n Please enter your age as of July 2021: ";
	cin>>age;
	cout<<AgeVerif(age)<<endl;
	cout<<"\n Thank you for using the Age Verification Application! Stay safe! Take care!";
	return 0;
}

int AgeVerif(int& a)
{
	if(a >= 18)
	{
		cout<<"\n\t Congratulations! You're eligible to vote in the up-coming elections."<<endl;
	} else {
		cout<<"\n\t Unfortunately, You are not eligible to vote.";
		cout<<"\n\t Please wait "<<18-a<<" year(s) to legally vote."<<endl;
	}
	return 0;
}
