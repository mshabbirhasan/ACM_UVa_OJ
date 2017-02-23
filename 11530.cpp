#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int numberOfCase, n=1, i, sum;
	char msg[1000], caseNo[10];
	
	gets(caseNo);
	numberOfCase = atoi(caseNo);

	while(n<=numberOfCase){
		sum=0;
		gets(msg);

		for(i=0; i<strlen(msg); i++){
			if(msg[i]==' '||msg[i]=='a'||msg[i]=='d'||msg[i]=='g'||msg[i]=='j'||msg[i]=='m'||msg[i]=='p'||msg[i]=='t'||msg[i]=='w')
				sum++;
			
			else if(msg[i]=='b'||msg[i]=='e'||msg[i]=='h'||msg[i]=='k'||msg[i]=='n'||msg[i]=='q'||msg[i]=='u'||msg[i]=='x')
				sum+=2;

			else if(msg[i]=='c'||msg[i]=='f'||msg[i]=='i'||msg[i]=='l'||msg[i]=='o'||msg[i]=='r'||msg[i]=='v'||msg[i]=='y')
				sum+=3;

			else if(msg[i]=='s'||msg[i]=='z')
				sum+=4;
		}

		cout<<"Case #"<<n<<": "<<sum<<endl;
		n++;
	}
	return 0;
}