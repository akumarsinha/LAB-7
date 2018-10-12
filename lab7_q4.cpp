#include <iostream>
using namespace std;
int sum(int i){
	if(i==0){
		return 0;	
	}
	else {
	return i+sum(i-1);
	}
}
int main (){
	int n;
	cout<<"Enter a number: ";cin>>n;
	cout<<"The sum of the natural number to "<<n<<" is "<<sum(n)<<endl;
	return 0;
}
