#include<iostream>

using namespace std;

int main(){
	int numberOfCases, a,b,j, sum;

	cin>>numberOfCases;

	int i=1;

	while(i<=numberOfCases){
		cin>>a>>b;
		sum=0;
		for(j=a; j<=b; j++){
			if(j%2!=0)
				sum=sum+j;
		}
		cout<<"Case "<<i<<": "<<sum<<endl;
		i++;
	}
	return 0;
}