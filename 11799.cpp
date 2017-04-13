#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int num_of_cases;
  cin>>num_of_cases;
  int i = 1;

  while(i <= num_of_cases){
    int num_of_creatures;
    cin>>num_of_creatures;
    int j = 1;
    int speed;
    int max = 0;
    while(j<=num_of_creatures){
      cin>>speed;
      if(speed>max)
        max = speed;
      j++;
    }

    cout<<"Case "<<i<<": "<<max<<endl;
    i++;
  }
  return 0;
}
