#include<iostream>

using namespace std;

int main(){
	char c;
	int n=0;

	while((c=getchar())!=EOF){
		if(isdigit(c)){
			n=n+(int)(c)-48;
			continue;
		}
		
		if(c=='b')
			c = ' ';
		if(c=='!')
			cout<<endl;
		if(c=='\n')
			cout<<endl;

		if(c!='!' || c!='\n'){
			for(int i=1;i<=n;i++)
				cout<<c;
		}
		n=0;
	}

	return 0;
}