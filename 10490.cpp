#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  //get a list of perfect numbers from:https://en.wikipedia.org/wiki/List_of_perfect_numbers
  int k;
  while(cin>>k){
    if(k == 0)
      break;
    else if(k == 2)
      cout<<"Perfect: 6!"<<endl;
    else if(k==3)
      cout<<"Perfect: 28!"<<endl;
    else if(k == 5)
      cout<<"Perfect: 496!"<<endl;
    else if(k == 7)
      cout<<"Perfect: 8128!"<<endl;
    else if(k == 11)
      cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    else if(k == 13)
      cout<<"Perfect: 33550336!"<<endl;
    else if(k == 17)
      cout<<"Perfect: 8589869056!"<<endl;
    else if(k == 19)
      cout<<"Perfect: 137438691328!"<<endl;
    else if(k == 23)
      cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    else if(k == 29)
      cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    else if(k==31)
      cout<<"Perfect: 2305843008139952128!"<<endl;
    else
      cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
  }

  return 0;
}
