#include<string>
#include<iostream>

using namespace std;

int process(std::string num){
	int i,count=0;
	char b[11];
	std::string sumString;

	for(i=0; i<num.length();i++)
		count = count+(int)num[i]-48; 	

	sprintf(b,"%d",count);
	sumString+=b;

	if(sumString.length()==1){
		cout<<sumString;
		return 0;
	}

	else
		process(sumString);

	return 0;
}

int main(){

	std::string number;

	while(getline(cin,number,'\n')){
		if(number=="0")
			break;
		process(number);
		cout<<endl;
	}
	return 0;
}