#include<iostream>

using namespace std;

int main(){
	long mainArray[10000], copyArray[10000];
	bool statusArray[10000];
	long n, i, j,mainArrayIndex=0, copyArrayIndex=0, statusArrayIndex=0; 
	long count=0;

	while(cin>>n){
		mainArray[mainArrayIndex++] = n;
		copyArray[copyArrayIndex++] = n;
		statusArray[statusArrayIndex++] = false;
	}

	for(i=0; i<mainArrayIndex; i++){
		count=0;
		for(j=0; j<copyArrayIndex; j++){
			if(mainArray[i]==copyArray[j] && statusArray[j]==false){
				count++;
				statusArray[j]=true;
			}
		}

		if(count!=0)
			cout<<mainArray[i]<<" "<<count<<endl;
	}
	return 0;
}