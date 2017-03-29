#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int numberOfCases;
  cin>>numberOfCases;

  int i = 1;
  int s, d;
  while(i<=numberOfCases){
    cin>>s>>d;
    int y = abs(s-d)/2;
    int x = s-y;
    if(x+y == s && abs(x-y) == d)
      cout<<max(x, y)<<" "<<min(x, y)<<endl;
    else
      cout<<"impossible"<<endl;
    i++;
  }
  return 0;
}
