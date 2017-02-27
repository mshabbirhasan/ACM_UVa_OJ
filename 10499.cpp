#include<iostream>

using namespace std;

int main(){
	long long int N;
	char p = '%';

	while(scanf("%lld",&N)){
		if(N<0)
			break;
		else if(N==1)
			printf("0%c\n",p);
		else
			printf("%lld%c\n",N*25,p);
	}
	return 0;
}