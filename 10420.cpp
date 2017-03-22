#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

char str[2005][80];
int noOfCases;

int sortMe(const void* a, const void* s){
	return(strcmp((char*)a, (char*)s));

}

int process(){
	int i, count;
	char country[80];
	qsort((void*)str, noOfCases, sizeof(str[0]),sortMe);

	for(i=0; i<noOfCases;i++){
		count=0;
		strcpy(country, str[i]);

		for(int j=0; j<noOfCases ; j++){
			if(!strcmp(str[j],country) && strcmp(country,"#")){
				count++;
				strcpy(str[j],"#");
			}
		}

		if(strcmp(country,"#"))
			cout<<country<<" "<<count<<endl;
	}
	return 0;
}

int main(){
	char rest[80];

	cin>>noOfCases;
	getchar();

	for(int i=0; i<noOfCases; i++){
		scanf("%s",str[i]);
		gets(rest);
	}
	
	process();
	
	return 0;
}