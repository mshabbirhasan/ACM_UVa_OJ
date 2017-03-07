#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
	char str[10010];
	char array[101][101];
	int noOfCase;

	cin>>noOfCase;
	getchar();

	while(noOfCase--){	
		gets(str);

		double squareRoot = sqrt(strlen(str));
		int intRoot = squareRoot;

		if(intRoot-squareRoot!=0)
			cout<<"INVALID";
		
		else{
			for(int j=0; j<strlen(str);){
				for(int k=0; k<intRoot; k++){
					for(int l=0; l<intRoot; l++){
						array[k][l]=str[j++];
					}
				}
			}

			for(int m=0; m<intRoot; m++){
				for(int p=0; p<intRoot;p++)
					cout<<array[p][m];
			}
		}
		cout<<endl;
	}
	return 0;
}