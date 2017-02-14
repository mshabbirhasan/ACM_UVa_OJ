#include<iostream>

using namespace std;

int main(){

	char c, prevChar;
	while((c=getchar())!=EOF){
		if(c=='B'||c=='F'||c=='P'||c=='V'){	
			if(prevChar!='1'){
				cout<<"1";
				prevChar='1';
			}
		}
		else if(c=='C'||c=='G'||c=='J'||c=='K'||c=='Q'||c=='S'||c=='X'||c=='Z'){
			if(prevChar!='2'){
				cout<<"2";
				prevChar='2';
			}
		}
		else if(c=='D'||c=='T'){
			if(prevChar!='3'){
				cout<<"3";
				prevChar='3';
			}
		}
		else if(c=='L'){
			if(prevChar!='4'){
				cout<<"4";
				prevChar='4';
			}
		}
		else if(c=='M' || c=='N'){
			if(prevChar!='5'){
				cout<<"5";
				prevChar='5';
			}
		}
		else if(c=='R'){
			if(prevChar!='6'){
				cout<<"6";
				prevChar='6';
			}
		}
		else if(c=='\n'){
			cout<<endl;
			prevChar='0';
		}
		else{
			prevChar='0';
		}
	}
	return 0;
}