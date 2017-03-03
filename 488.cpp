#include<iostream>

using namespace std;

int generateWave(int amp){
	for(int i=1; i<=amp; i++){
		for(int j=1; j<=i;j++)
			cout<<i;
		cout<<endl;
	}

	for(int k=amp-1; k>=1; k--){
		for(int l=k; l>=1; l--)
			cout<<k;
		cout<<endl;
	}

	return 0;
}

int main(){
	int noOfCases, caseNo=1, amplitude, frequency;

	cin>>noOfCases;

	while(caseNo<=noOfCases){
		cin>>amplitude>>frequency;
		
		for(int i=1; i<=frequency; i++){
			generateWave(amplitude);
			if(i!=frequency)
				cout<<endl;
		}
		
		if(caseNo!=noOfCases)
			cout<<endl;

		caseNo++;
	}

	return 0;
}