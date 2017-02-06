#include<iostream>

using namespace std;

int main(){
	double army_hasmat, army_opponent;
	
	while(cin>>army_hasmat>>army_opponent){
		if(army_hasmat>army_opponent)
			swap(army_hasmat,army_opponent);
		printf("%.0lf\n",army_opponent-army_hasmat);
	}
	return 0;
}