#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
  int number_of_cases;
  cin>>number_of_cases;
  int i = 1;
  while(i<=number_of_cases){
    double sum = 0;
    double salary;
    for(int j = 0; j<12; j++){
      cin>>salary;
      sum += salary;
    }
    double average = sum/12.0;

    if(average > 999.99)
      printf("%d $%ld,%.2lf\n",i,(long)(average/1000.0),fmod(average,1000.0));
    else
      printf("%d $%.2f\n",i,average);

    i++;
  }
  return 0;
}
