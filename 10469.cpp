#include<iostream>

using namespace std;

int main(){
	unsigned long int number1, number2;

	while(cin>>number1>>number2){
		cout<<(number1^number2)<<endl;
	}
	return 0;
}