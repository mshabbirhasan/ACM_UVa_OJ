#include<iostream>

using namespace std;

int main(){
	unsigned int number;
	int i,sum;
	cout<<"PERFECTION"<<" "<<"OUTPUT"<<endl;
	while(cin>>number){
		if(number==0)
			break;
		i=1;
		sum=0;
		while(i<number){
			if(number%i==0)
				sum=sum+i;
			i++;
		}
		if(sum==number)
			printf("%5d  %s\n",number,"PERFECT");
		if(sum<number)
			printf("%5d  %s\n",number,"DEFICIENT");
		if(sum>number)
			printf("%5d  %s\n",number,"ABUNDANT");
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}