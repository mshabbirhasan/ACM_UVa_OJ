#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char noOfGroups[5], str[110];
	int groupLen, i,j;

	while(scanf("%s", noOfGroups)){
		if(atoi(noOfGroups)==0)
			break;

		scanf("%s",str);
		
		groupLen = strlen(str)/atoi(noOfGroups);

		for(i=0;i<strlen(str);){
			for(j=i+groupLen-1; j>=i; j--)
				cout<<str[j];
			
			i = i+groupLen;
		}
		cout<<endl;
	}
	
	return 0;
}