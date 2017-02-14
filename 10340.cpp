#include<iostream>
#include<string.h>

using namespace std;

int main(){
		
	//freopen("10340.in.txt","r",stdin);
	char str1[100000], str2[100000];
	int count,k;
	
	while((scanf("%s%s",str1,str2))!=EOF){
		count=0;
		k=0;
		for(int i=0; i<strlen(str1); i++){
			for(int j=k; j<strlen(str2); j++){
				if(str2[j]==str1[i]){
					k=j+1;
					count++;
					break;
				}
			}
		}

		if(strlen(str1)==count)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}