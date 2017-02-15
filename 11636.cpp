#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int noOfLines, noOfPaste, i=1;

	while(cin>>noOfLines){
		if(noOfLines<0)
			break;
		else{
			noOfPaste = ceil(log(noOfLines)/log(2));
			cout<<"Case "<<i<<": "<<noOfPaste<<endl;
			i++;
		}
	}
	
	return 0;
}