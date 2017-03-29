#include<stdio.h>
#include<stdlib.h>
#define SIZE 2000002

static int AGEARRAY[SIZE];

using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}

int main(){
  //freopen("in.txt", "r", stdin);
  //freopen("out.txt", "w", stdout);

  register unsigned n, i;
  while(scanf("%u", &n) && n!=0){
    for(i = 0; i<n; i++){
      scanf("%d", &AGEARRAY[i]);
    }

    qsort(AGEARRAY, n, sizeof(int), compare);

    for(i = 0; i<n; i++){
      if(i == n-1)
        printf("%d\n",AGEARRAY[i]);
      else
        printf("%d ",AGEARRAY[i]);
    }
  }
  return 0;
}
