#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
  double N;
  int caseNumber = 1;
  while(cin>>N){
    if(N == 0)
      break;
    double n = ceil((3+sqrt(9+8*N))/2);
    printf("Case %d: %.0lf\n",caseNumber,n);

    caseNumber++;
  }
  return 0;
}
