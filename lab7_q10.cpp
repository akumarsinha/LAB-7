#include <iostream>
using namespace std;
int fib(int n){
	if(n==1){
	return 0;}
	if(n==2){
	return 1;}
	else{
	return fib(n-1)+fib(n-2);}
}


int main(){
	int a;
	cout<<"Which term in Fibonacci sequence do you want?";
	cout<<endl;
	cin>>a;
	cout<<endl;
	cout<<"The "<<a<<"th term of Fibonacci sequence is : "<<fib(a)<<endl;
return 0;

}


