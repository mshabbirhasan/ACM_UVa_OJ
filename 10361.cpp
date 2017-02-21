#include<iostream>

using namespace std;

int main(){	
	int numberOfCases, i=1,a,b,c,d,e,f;
	char str1[150], str2[150];
	
	int index_s1, index_s2, index_s3, index_s4, index_s5;
	
	cin>>numberOfCases;
	
	while(i<=numberOfCases){
		
		gets(str1);
		if(!strcmp(str1,""))
			gets(str1);

		gets(str2);
		if(!strcmp(str2,""))
			gets(str2);

		char s1[150], s2[150], s3[150], s4[150], s5[150];

		index_s1=index_s2=index_s3=index_s4=index_s5=0;

		for(a=0; str1[a]!='<'; a++)
			s1[index_s1++] =str1[a]; 
		s1[index_s1]='\0';

		for(b=a+1; str1[b]!='>'; b++)
			s2[index_s2++] =str1[b]; 
		s2[index_s2]='\0';

		for(c=b+1; str1[c]!='<'; c++)
			s3[index_s3++] =str1[c]; 
		s3[index_s3]='\0';

		for(d=c+1; str1[d]!='>'; d++)
			s4[index_s4++] =str1[d]; 
		s4[index_s4]='\0';

		for(e=d+1; str1[e]!='\0'; e++)
			s5[index_s5++] =str1[e]; 
		s5[index_s5]='\0';

		cout<<s1<<s2<<s3<<s4<<s5<<endl;

		for(f=0; f<strlen(str2); f++){
			if(str2[f]!='.')
				cout<<str2[f];
			else{
				cout<<s4<<s3<<s2<<s5;
				f=f+3;
			}
		}
		cout<<endl;

		i++;
	}

	return 0;
}