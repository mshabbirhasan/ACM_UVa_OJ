#include<iostream>

using namespace std;

int main(){	
	int dimension,row,column,rowErrorCount,colErrorCount;
	int array[100][100];

	while(cin>>dimension){
		row=0, column=0, rowErrorCount=0, colErrorCount=0;

		if(dimension==0)
			break;
		else{
			for(int i=0; i<dimension; i++){
				for(int j=0;j<dimension; j++)
					cin>>array[i][j];
			}

			for(int k=0; k<dimension; k++){
				int rowSum=0;
				for(int l=0; l<dimension; l++)
					rowSum = rowSum+array[k][l];
				
				if(rowSum%2!=0){
					rowErrorCount++;
					row=k;
				}
			}

			for(int m=0; m<dimension;){
				int n=0;
				int colSum=0;
label:
				colSum = colSum+array[n][m];
				n++;
				
				if(n==dimension)
					m++;
				else
					goto label;

				if(colSum%2!=0){
					colErrorCount++;
					column=m;
				}
			}
		}
		if(rowErrorCount==0 && colErrorCount==0)
			cout<<"OK"<<endl;
		else if(rowErrorCount==1 && colErrorCount==1)
			cout<<"Change bit ("<<row+1<<","<<column<<")"<<endl;
		else
			cout<<"Corrupt"<<endl;
	}
	return 0;
}