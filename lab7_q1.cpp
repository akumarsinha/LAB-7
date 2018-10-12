#include <iostream>
using namespace std;
int number_Power(int base, int power){
	if(power==0){	
	return 1;}
	else {
	return base*number_Power(base,power-1);}}

int main (){
	int base; int power;
	cout <<"Enter the base : ";
	cin>>base;cout<<endl;
	cout <<"Enter the power : ";
	cin>>power;cout<<endl;
	//the result is
	cout<<base<<"^"<<power<<" is "<</*calling function*/number_Power(base,power)<<endl;
return 0;
}
