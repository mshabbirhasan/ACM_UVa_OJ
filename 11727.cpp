#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
  //freopen("in.txt", "r", stdin);
  //freopen("out.txt", "w", stdout);

  int numberOfCases;
  int salary[3];
  cin>>numberOfCases;

  int i = 1;
  while(i<=numberOfCases){
    cin>>salary[0]>>salary[1]>>salary[2];
    qsort(salary, 3, sizeof(int), compare);

    cout<<"Case "<<i<<": "<<salary[1]<<endl;
    i++;
  }
  return 0;
}
