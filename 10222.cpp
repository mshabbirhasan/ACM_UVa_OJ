#include<stdio.h>
#include<ctype.h>

int main(){
	
	char *ch="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    char s[100];
    int i,j,k;
    
	while(gets(s)){
		for(i=0;s[i];i++){
			k=1;
			for(j=0;ch[j];j++)
				if(s[i]==ch[j]){
					printf("%c",ch[j-2]);
					k=0;
					break;
				}
			if(k)
				printf("%c",s[i]);
		}
       
		printf("\n");
    }
    
	return 0;
 }

