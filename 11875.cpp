#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int compare (const void* a, const void* b){
  return *(int*) a - *(int*) b;
}

int main(){
  int numberOfCases;
  int numberOfPlayers;
  int ageArray[11];

  cin>>numberOfCases;
  int i = 1;

  while(i<=numberOfCases){
    cin>>numberOfPlayers;
    for(int m = 0; m<numberOfPlayers; m++){
      cin>>ageArray[m];
    }

    qsort(ageArray, numberOfPlayers, sizeof(int), compare);

    int captains_age, mid;
    mid = numberOfPlayers/2;
    captains_age = ageArray[mid];

    cout<<"Case "<<i<<": "<<captains_age<<endl;
    i++;
  }
  return 0;
}
