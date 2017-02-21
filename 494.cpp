#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[10000];
	int count,i;

	while(gets(str)){
		count=0;
		for(i=0; i<strlen(str); i++){
			if(isalpha(str[i]) && !isalpha(str[i+1]))
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}