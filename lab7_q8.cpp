#include <iostream>
using namespace std;
int sum(int n){
	if(n==0){
	return 0;}
	else{
	return n%10 + sum(n/10);}

}
int main(){
	int n;
	cout<<"Type a number: ";cin>>n;
	cout<<endl;
	cout<<"The sum of the digits of the number "<<n<<" is "<<sum(n)<<endl;
return 0;

}
