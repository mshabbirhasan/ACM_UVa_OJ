#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
  long donation_amount;
  long total_amount = 0;
  string command;

  int number_of_operations;
  cin>>number_of_operations;

  int i = 1;
  while(i<=number_of_operations){
    cin>>command;
    if(command == "donate"){
      cin>>donation_amount;
      total_amount+= donation_amount;
    }
    else
      cout<<total_amount<<endl;

    i++;
  }
  return 0;
}
