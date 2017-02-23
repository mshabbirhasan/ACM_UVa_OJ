#include<iostream>

using namespace std;

int main(){
	int numberOfCases, caseNo =1;
	long long int number1, number2;

	cin>>numberOfCases;

	while(caseNo<=numberOfCases){
		scanf("%lld%lld",&number1,&number2);;
		
		if(number1<number2)
			cout<<"<"<<endl;
		else if(number1>number2)
			cout<<">"<<endl;
		else if(number1==number2)
			cout<<"="<<endl;
		caseNo++;
	}
	
	return 0;
}