#include <iostream>

using namespace std;

char stack[100];
int top = 0;

int push(char c) {
	stack[top] = c;
	top++;

	return 0;
}

char pop() {
	top--;
	return stack[top];
}

int empty() {
	if(top == 0)
		return 1;
	
	return 0;
}

int main(){
	char ch;

	while((ch=getchar())!= EOF) {
		if(isspace(ch)) {
			while (!empty())
				cout<<pop();			
			cout<<ch;
		}

		else
			push(ch);
	}

	while(!empty())
		cout<<pop();

	return 0;
}