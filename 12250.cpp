#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    string str;
    string language;
    int caseNumber = 1;
    while(cin>>str){
        if(str == "#")
            break;
        else if(str == "HELLO")
            language = "ENGLISH";
        else if(str == "HOLA")
            language = "SPANISH";
        else if(str == "HALLO")
            language = "GERMAN";
        else if(str == "BONJOUR")
            language = "FRENCH";
        else if(str == "CIAO")
            language = "ITALIAN";
        else if(str == "ZDRAVSTVUJTE")
            language = "RUSSIAN";
        else
            language = "UNKNOWN";

        cout<<"Case "<<caseNumber<<": "<<language<<endl;

        caseNumber++;
    }
    return 0;
}
