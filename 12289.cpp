#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
  int number_of_cases;
  cin>>number_of_cases;
  int i = 1;

  string str;

  while(i<=number_of_cases){
    int count = 0;
    cin>>str;
    if(str.length() == 5){
      cout<<"3"<<endl;
    }
    else{
      if(str.length() == 3){
        if(str.at(0) == 'o')
          count++;
        if(str.at(1) == 'n')
          count++;
        if(str.at(2) == 'e')
          count++;

        if(count>=2)
          cout<<"1"<<endl;
        else
          cout<<"2"<<endl;
      }
    }
    i++;
  }
  return 0;
}
