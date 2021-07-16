#include<iostream>
using namespace std;
int timezone(int& time);
int main ()
{
	int time;
	cout<<"\t\n Welcome Human!";
	cout<<"\n Please enter your current time here in 24-hour format: ";
	cin>>time;
	cout<<timezone(time)<<endl;
	
	return 0;
}

int timezone(int& time)
{
	if(time>=400 && time<=1159){
		cout<<"\n\t Good Morning! Please get enough water and make sure to stay Positive!";
		cout<<"\n\t Have a great day ahead!";
	} else if(time>=1200 && time<=1559){
		cout<<"\n\t Good Afternoon! Eat soon and get enough water!";
	} else if(time>=1600 && time<=1859){
		cout<<"\n\t Good Evening! Hope you had a great day!";
		cout<<"\n\t Enjoy your evening!";
	} else if(time>=1900 && time<=2359){
		cout<<"\n\t Good Night! Sleep well!";
	} else if(time>=0 && time<=359){
		cout<<"\n\t Why're you even online? OwO Sleep soon dude!";
	}
	return 0;
}
