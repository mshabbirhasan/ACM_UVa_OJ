#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int number_of_cases;
  cin>>number_of_cases;
  int i = 1;
  int n, k, p;
  while(i<=number_of_cases){
    cin>>n>>k>>p;
    int counter = 1, m;
    for(m = k; counter <= p; counter++){
      m++;
      if (m == n+1)
        m = 1;
    }
    cout<<"Case "<<i<<": "<<m<<endl;
    i++;
  }
  return 0;
}
