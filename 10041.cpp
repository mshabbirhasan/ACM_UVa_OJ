#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int compare (const void* a, const void* b){
  return *(int*) a - *(int*) b;
}

int main(){
  int numberOfCases;
  int numberOfRelatives;
  int streetAddress[30001];

  cin>>numberOfCases;
  int i = 1;

  while(i<=numberOfCases){
    cin>>numberOfRelatives;
    for(int m = 0; m<numberOfRelatives; m++){
      cin>>streetAddress[m];
    }

    qsort(streetAddress, numberOfRelatives, sizeof(int), compare);
    int mid, r;
    r = numberOfRelatives/2;
    if(numberOfRelatives%2 == 0){
      mid = (streetAddress[r] + streetAddress[r-1])/2;
    }
    else{
      mid = streetAddress[r];
    }
    int distance = 0;
    for(int j=0; j<numberOfRelatives; j++){
      distance+= abs(streetAddress[j] - mid);
    }

    cout<<distance<<endl;
    i++;
  }
  return 0;
}
