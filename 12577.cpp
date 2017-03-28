#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int caseNumber = 1;
    char str[20];
    while(cin>>str){
        if(str[0]=='*')
            break;
        else if(str[0]=='H')
            cout<<"Case "<<caseNumber<<": "<<"Hajj-e-Akbar"<<endl;
        else if(str[0] == 'U')
            cout<<"Case "<<caseNumber<<": "<<"Hajj-e-Asghar"<<endl;

        caseNumber++;
    }
    return 0;
}
