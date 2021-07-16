#include<iostream>
using namespace std;

int main()
{
	int num[10];
	cout<<"Please enter any ten numbers of your choice: ";
	
	for(int i=0; i<10; i++){
		cin >> num[i];
	}
	
	for(int i=0; i<10; i++){
		cout <<" \n" <<(*num+i);
	}
return 0;
}
