#include<iostream>
using namespace std;


class Second {
	
	private :
		int hour,min,sec, sum;

	
	public :
		void gettime();
		void outputtime();
		int addtime();

};

void Second :: gettime()
{
		cout<<"\t Welcome Human!"<<endl;
		cout<<"\n Please enter time in 24 hour format."<<endl;
		cout<<"\n Note: Please mark 24 hr as 00 hours."<<endl;
	
		cout<<"\n Enter hours count here: ";
		cin>>hour;
		cout<<"\n Enter minutes count here: ";
		cin>>min;
		cout<<"\n Enter seconds count here: ";
		cin>>sec;
}

void Second :: outputtime()
{
		cout<<"\n The time you've entered is: "<<endl;
		cout<<"\n\t "<<hour<<":"<<min<<":"<<sec<<" (in hh:mm:ss format.)"<<endl;
		cout<<"\n The total amount of seconds so far are: "<<sum<<" seconds and counting."<<endl;
}

int Second :: addtime()
{
		sum = (hour*60*60) + (min*60) + sec;
}

int main(){
	
	Second present;
		
		present.gettime();
		present.addtime();
		present.outputtime();
	
	return 0;
}
