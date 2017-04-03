#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
  int number_of_cases;
  cin>>number_of_cases;

  int caseNumber = 1;

  while(caseNumber<=number_of_cases){
    int l, w, h;
    cin>>l>>w>>h;
    if(l<=20 && w<=20 && h<=20)
      cout<<"Case "<<caseNumber<<": good"<<endl;
    else
      cout<<"Case "<<caseNumber<<": bad"<<endl;

    caseNumber++;
  }
  return 0;
}
