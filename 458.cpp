#include<iostream>

using namespace std;

int main(){
	
	char en_char;
	while((en_char=getchar())!=EOF){
		if(en_char!='\n')
			cout<<char(en_char-7);
		else
			cout<<endl;
	}

	return 0;
}