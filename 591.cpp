#include<iostream>
#include<math.h>

using namespace std;

int main(){

	int setNo=0, i, j, noOfBricks, average, brick[200], sum, totalMoves, minMoves;
	
	while(cin>>noOfBricks){
		if(noOfBricks==0)
			break;
		setNo++;
		sum=0;
		for(i=0; i<noOfBricks; i++){
			cin>>brick[i];
			sum=sum+brick[i];
		}

		average = sum/noOfBricks;
		totalMoves=0;
		for(j=0; j<noOfBricks; j++){
			totalMoves = totalMoves+abs(average-brick[j]);
		}

		minMoves = totalMoves/2;
		cout<<"Set #"<<setNo<<endl;
		cout<<"The minimum number of moves is "<<minMoves<<"."<<endl<<endl;
	}
	return 0;
}