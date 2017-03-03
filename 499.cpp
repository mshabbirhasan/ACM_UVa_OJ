#include<iostream>
#include<string.h>

using namespace std;

int array[125];

int init(){
	for(int a=0;a<125;a++)
		array[a]=0;
	
	return 0;
}

int main(){
	char c;
	char str[10000];
	int i;
	
	while(gets(str)){
		init();

		for(i=0;i<strlen(str);i++){
			c=str[i];

			if(isalpha(c))
				array[(int)c]++;
		}

		int frequency = array[65];

		for(int b=65; b<123; b++){
			if(array[b]>frequency)
				frequency=array[b];
		}

		for(int x=65; x<123;x++){
			if(array[x]==frequency)
				printf("%c",x);
		}
		cout<<" "<<frequency<<endl;
	}

	return 0;
}