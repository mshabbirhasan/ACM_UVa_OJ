#include<iostream>

using namespace std;

int twoDigit(){
	cout<<"00"<<endl<<"01"<<endl;
	int i=0;
	for(i=11; i<=99; i++){
		int a=i/10;
		int b=i%10;
		int c=(a+b)*(a+b);

		if(i==c)
			cout<<i<<endl;
	}
	return 0;
}

int fourDigit(){
	cout<<"0000"<<endl<<"0001"<<endl;
	int i=0;
	for(i=1000; i<=9999; i++){
		int a=i/100;
		int b=i%100;
		int c=(a+b)*(a+b);

		if(c==i)
			cout<<i<<endl;
	}
	
	return 0;
}

int sixDigit(){
	cout<<"000000"<<endl<<"000001"<<endl;
	long int i=0;
	for(i=10000; i<=999999; i++){
		long int a=i/1000;
		long int b=i%1000;
		long int c=(a+b)*(a+b);

		if(c==i){
			if(i<100000)
				cout<<"0"<<i<<endl;
			else
				cout<<i<<endl;
		}
	}
	return 0;
}

int eightDigit(){
	cout<<"00000000"<<endl<<"00000001"<<endl;
	long int i=0;

	for(i=1000000; i<=99999999; i++){
		long int a=i/10000;
		long int b=i%10000;
		long int c=(a+b)*(a+b);

		if(c==i){
			if(i<10000000)
				cout<<"0"<<i<<endl;
			else
				cout<<i<<endl;
		}
	}
	return 0;
}

int main(){
	int noOfDigit;

	while(cin>>noOfDigit){
		if(noOfDigit==2)
			twoDigit();

		else if(noOfDigit==4)
			fourDigit();

		else if(noOfDigit==6)
			sixDigit();

		else if(noOfDigit==8)
			eightDigit();
	}

	return 0;
}