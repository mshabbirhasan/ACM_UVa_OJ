#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int flag=0;
	char str;
	while((str=getchar())!=EOF){
		
		if(str=='"'&&flag==0){				
			cout<<"``";
			flag=1;		
		}

		else if(str=='"'&&flag==1){				
			cout<<"''";
			flag=0;
		}
		else{
			cout<<str;
		}
	}

	return 0;
}
