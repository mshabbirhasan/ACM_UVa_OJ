#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
  int numberOfTestCases;
  cin>>numberOfTestCases;

  int i = 1;

  while(i<= numberOfTestCases){
    int n;
    cin>>n;

    int result = (((((n*567)/9)+7492)*235)/47)-498;
    if(result<0){
      result = result*(-1);
    }
    cout<<(result%100)/10<<endl;
    i++;
  }
  return 0;
}
