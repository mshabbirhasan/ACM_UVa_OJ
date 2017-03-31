#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
  int number_of_ants;
  while((cin>>number_of_ants)){
      if(number_of_ants == 0)
        break;

      int l = 0, w = 0, h = 0;
      int max_h = 0;
      int volume = 0;
      for(int i = 0; i<number_of_ants; i++){
        cin>>l>>w>>h;
        if(h>=max_h){
            if(h == max_h){
              int volume2 = l*w*h;
              if(volume2>volume)
                volume = volume2;
                max_h = h;
            }
            else{
              volume = l*w*h;
              max_h = h;
            }
        }
      }

      cout<<volume<<endl;

  }

  return 0;
}
