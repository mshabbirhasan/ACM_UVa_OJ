#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int caseNo;
	char str[10000];

	cin>>caseNo;
	getchar();

	while(caseNo--){
		gets(str);

		if(!strcmp(str,"1") || !strcmp(str,"4") || !strcmp(str,"78"))
			cout<<"+"<<endl;

		else if(str[strlen(str)-1]=='5' && str[strlen(str-2)=='3'])
			cout<<"-"<<endl;
		else if(str[0]=='9' && str[strlen(str)-1]=='4')
			cout<<"*"<<endl;
		else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
			cout<<"?"<<endl;
	}
	return 0;
}