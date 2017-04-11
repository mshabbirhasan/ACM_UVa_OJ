#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  long number_of_cases;
  while(cin>> number_of_cases){
    if (number_of_cases == 0)
      break;
    long divX, divY;
    cin>>divX>>divY;

    long i = 1, m, n;
    while(i<=number_of_cases){
      cin>>m>>n;
      if(m == divX || n == divY)
        cout<<"divisa"<<endl;
      else if(m > divX && n > divY)
        cout<<"NE"<<endl;
      else if(m > divX && n < divY)
        cout<<"SE"<<endl;
      else if (m < divX && n > divY)
        cout<<"NO"<<endl;
      else if (m < divX && n < divY)
        cout<<"SO"<<endl;

      i++;
    }
  }
  return 0;
}
