#include<iostream>
#include<string.h>

using namespace std;

int isPalin(char str[]){
	char str2[1000];
	int j,k;

	for(k=strlen(str)-1,j=0 ; k>=0; k--, j++)
		str2[j] = str[k];
	
	str2[j++]='\0';
	
	if(!strcmp(str,str2))
		return 1;
	else
		return 0;
}

int isMirror(char str[]){
	char str2[1000],str3[1000];
	int i,l,m;

	for(i=0; i<strlen(str); i++){
		if(str[i]=='A')
			str2[i]='A';

		else if(str[i]=='E')
			str2[i]='3';

		else if(str[i]=='H')
			str2[i]='H';

		else if(str[i]=='I')
			str2[i]='I';

		else if(str[i]=='J')
			str2[i]='L';

		else if(str[i]=='L')
			str2[i]='J';

		else if(str[i]=='M')
			str2[i]='M';

		else if(str[i]=='O')
			str2[i]='O';

		else if(str[i]=='S')
			str2[i]='2';

		else if(str[i]=='T')
			str2[i]='T';

		else if(str[i]=='U')
			str2[i]='U';

		else if(str[i]=='V')
			str2[i]='V';

		else if(str[i]=='W')
			str2[i]='W';

		else if(str[i]=='X')
			str2[i]='X';

		else if(str[i]=='Y')
			str2[i]='Y';

		else if(str[i]=='Z')
			str2[i]='5';

		else if(str[i]=='1')
			str2[i]='1';

		else if(str[i]=='2')
			str2[i]='S';

		else if(str[i]=='3')
			str2[i]='E';

		else if(str[i]=='5')
			str2[i]='Z';

		else if(str[i]=='8')
			str2[i]='8';
		else
			str2[i]=' ';
	}	
		str2[i++]='\0';

	for(l=strlen(str2)-1,m=0 ; l>=0; l--, m++)
		str3[m] = str2[l];
	
	str3[m++]='\0';

	if(!strcmp(str, str3))
		return 1;
	else
		return 0;
}

int main(){
	char str[1000];

	while(cin>>str){
		if(!isPalin(str) && !isMirror(str))
			cout<<str<<" -- is not a palindrome."<<endl<<endl;

		else if(isPalin(str) && !isMirror(str))
			cout<<str<<" -- is a regular palindrome."<<endl<<endl;
		
		else if(!isPalin(str) && isMirror(str))
			cout<<str<<" -- is a mirrored string."<<endl<<endl;
		
		else if(isPalin(str) && isMirror(str))
			cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
	}
	
	return 0;
}