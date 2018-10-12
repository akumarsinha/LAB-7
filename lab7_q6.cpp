#include <iostream>
using namespace std;
int reverse(int n){
	if(n==0){
	return 0;}
	else{
	cout<<n%10;
	return reverse(n/10);}

}
int main(){
	int n;
	cout<<"type a number : ";cin>>n;
	reverse(n);cout<<endl;
return 0;

}
