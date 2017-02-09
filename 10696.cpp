#include<iostream>

using namespace std;

unsigned long int f91(unsigned long int num){
	if(num<=100)
		return f91(f91(num+11));
	if(num>=101)
		return num-10;
}
int main(){
	unsigned long int number;
	while(cin>>number){
		if(number==0)
			break;
		cout<<"f91("<<number<<") = "<<f91(number)<<endl;

	}
	return 0;
}