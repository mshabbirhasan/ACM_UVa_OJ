#include<iostream>
#include<string.h>

using namespace std;

int isVowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
		return 1;
	return 0;
}
int main(){
	
	char str[250];

	int i=0,j=0,k=0;

	int sum_firstPart=0, sum_secondPart=0, sum_thirdPart=0;

	while(gets(str)){
		if(!strcmp(str,"e/o/i"))
			break;

		sum_firstPart=0, sum_secondPart=0, sum_thirdPart=0;

		for(i=0; str[i]!='/'; i++){
			if(isVowel(str[i]) && !isVowel(str[i-1]))
				sum_firstPart++;
		}

		for(j=i+1; str[j]!='/'; j++){
			if(isVowel(str[j]) && !isVowel(str[j-1]))
				sum_secondPart++;			
		}

		for(k=j+1; str[k]!='\0'; k++){
			if(isVowel(str[k]) && !isVowel(str[k-1]))
				sum_thirdPart++;					
		}

		if(sum_firstPart==5 && sum_secondPart==7 && sum_thirdPart==5)
			cout<<"Y"<<endl;
		else if(sum_firstPart!=5)
			cout<<"1"<<endl;
		else if(sum_secondPart!=7)
			cout<<"2"<<endl;
		else if(sum_thirdPart!=5)
			cout<<"3"<<endl;
	}
	return 0;
}