#include<iostream>

using namespace std;

int calculate(char a[]){
	int sum=0, temp=0;
	int i;
	for(i=0; i<strlen(a); i++){
		if(!isalpha(a[i]))
			continue;
		if(isupper(a[i]))
			a[i] = tolower(a[i]);
		
		sum=sum+a[i]-96;
	}
	
	while(sum >= 10){
        temp = sum, sum = 0;
        
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
    }
	
	return sum;
}

int main(){
	char name1[50], name2[50];
	int name1Value=0, name2Value=0;
	double ratio;

	while(gets(name1)){
		gets(name2);

		name1Value = calculate(name1);
		name2Value = calculate(name2);
		
		if(name1Value>=name2Value){
			ratio = ((double)name2Value/name1Value)*100;
			printf("%.2lf %c\n",ratio,'%');
		}
		else{
			ratio = ((double)name1Value/name2Value)*100;
			printf("%.2lf %c\n",ratio,'%');
		}

	}
	return 0;
}