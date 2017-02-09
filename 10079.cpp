#include<iostream>

using namespace std;

int main(){
	long long int noOfCuts;
	while(scanf("%lld",&noOfCuts)){
		if(noOfCuts<0)
			break;
		printf("%lld\n",(1+(noOfCuts*(noOfCuts+1))/2));
	}
	return 0;
}