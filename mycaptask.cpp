#include<iostream>
using namespace std;

float mult( float& A1, float& A2, float& result){
	result = A1 * A2;
	cout<< "\t The product of A1 & A2 is " << result;
}
int main(){
	float A1, A2, result;
	cout<< "\t Welcome~! Please enter your numbers~! ";
	cout<< "\n Please enter A1: ";
	cin>> A1;
	cout<< "\n Please enter A2: ";
	cin>> A2;
	cout<< mult(A1,A2,result);
	return 0;
}
