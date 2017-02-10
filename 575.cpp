#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){

	char number[1000];
	long long int decimal;

	int i,k;

	while(cin>>number){
		decimal=0;
		if(!strcmp(number,"0"))
			break;
		for(i=0,k=strlen(number)-1; i<strlen(number),k>=0; i++,k--){
			decimal = decimal+ ((int)(number[i])-48)*(pow(2,k+1)-1);
		}
		printf("%lld\n",decimal);
	}
	return 0;
}