#include <iostream>
using namespace std;
int number(int i,int n){
	if (i==n+1){
	return 0;}
	else {
	cout<<i<<endl;
	i++;
	return number(i,n);}
	
}

int main (){
	int n,i;
	cout<<"Enter a natural number : ";
	cin>>n;
	number(1,n);
return 0;
}

