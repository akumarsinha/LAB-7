#include <iostream>
using namespace std;
int fact(int n){
	if(n==0){
	return 0;}
	else{
	return n*fact(n-1);}
}


int main(){
	int a;
	cout<<"Type a number : ";cin>>a;
	cout<<endl;
	cout<<"The factorial of the number "<<a<<" is "<<fact(a)<<endl;
return 0;

}
