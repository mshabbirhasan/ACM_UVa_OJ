#include<iostream>

using namespace std;

int main(){
	long noOfTestCase,noOfFarmer, area,animal,environment;

	cin>>noOfTestCase;
	int i=1,j;
	double sum;

	while(i<=noOfTestCase){
		cin>>noOfFarmer;
		j=1;
		sum=0;
		while(j<=noOfFarmer){
			cin>>area>>animal>>environment;
			sum=sum+area*environment;
			j++;
		}
		printf("%.0lf\n",sum);
		i++;
	}
	return 0;
}