#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
	
	char str[60];
	
	while(cin>>str){
		if(!strcmp(str,"#"))
			break;
		while(1){
			if(next_permutation(str,str+strlen(str))){
				cout<<str<<endl;
				break;
			}
			else{
				cout<<"No Successor"<<endl;
				break;
			}
		}
	}
	return 0;
}
