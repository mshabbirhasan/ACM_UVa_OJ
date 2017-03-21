#include<iostream>
#include<string.h>

using namespace std;

unsigned long reverseMe(unsigned long int n){
	char strOrg[20], strRev[20];
	int i,j;
	unsigned long int revN;

	sprintf(strOrg,"%lu",n);

	for(i=strlen(strOrg)-1,j=0; i>=0; i--,j++)
		strRev[j]=strOrg[i];

	strRev[j]=NULL;
	revN = atof(strRev);

	return revN;
}

int main(){	
	int noOfCase,iteration;
	unsigned long orgNumber, revNumber, number;

	cin>>noOfCase;
	getchar();

	while(noOfCase--){
		iteration = 1;
		cin>>orgNumber;
		revNumber = reverseMe(orgNumber);

		number = orgNumber+revNumber;

		while(1){
			revNumber = reverseMe(number);
			if(revNumber==number)
				break;
			number = number+revNumber;
			iteration++;
		}
		
		cout<<iteration<<" "<<number<<endl;
	}
	return 0;
}