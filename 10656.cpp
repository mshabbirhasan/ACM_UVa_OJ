#include<iostream>

using namespace std;

int main() {
	int i, j, flag, n;
	
	while(cin>>n) {
		if(n==0) 
			break;

		flag = 1;
		for(j = 0; j<n; j++) {
			scanf("%d",&i);
			if(i) {
				if(flag)
					printf("%d",i);
				else 
					printf(" %d",i);
				flag = 0;
			}
		}

		if(flag) 
			printf("0");
    
		printf("\n");
	}
	
	return 0;
}


