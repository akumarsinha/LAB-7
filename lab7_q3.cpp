#include <iostream>
using namespace std;
int number(int i,int n){
	if (i==n+1 || i==n+2){
	return 0;}
	else {
		cout<<i<<endl;
		i+=2;
		return number(i,n);}	
}

int main (){
	int n,i;
	cout<<"Enter a natural number : ";
	cin>>n;
	cout<<"The odd numbers are :"<<endl;number(1,n);
	cout<<"The even numbers are: "<<endl;number(2,n);
return 0;
}

