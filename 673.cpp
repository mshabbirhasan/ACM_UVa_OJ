#include<string>
#include<iostream>

using namespace std;

int processMe(const string s){
	int i=0, p=0,b=0;
	char first, last;

	if(s=="")
		return 1;
	
	for(i=0; i<s.size(); i++){
		if(s[i]=='(')
			p++;
		else if(s[i]==')')
			p--;
		else if(s[i]=='[')
			b++;
		else if(s[i]==']')
			b--;

		if(p==0 && b==0)
			break;
	}

	if(i<s.size()-1)
		return(processMe(s.substr(0,i+1)) && processMe(s.substr(i+1)));

	first = s[0];
	last = s[s.size()-1];

	if((first=='(' && last ==')') || (first =='[' && last ==']'))
		return processMe(s.substr(1,s.size()-2));

	return 0;
}

int main(){	
	int noOfCase, flag;
	string str;

	cin>>noOfCase;
	
	while(getchar() !='\n');

	while(noOfCase--){
		getline(cin,str);		
		flag = processMe(str);

		if(flag==0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}

	return 0;
}
