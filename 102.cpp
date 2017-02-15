#include <iostream>

using namespace std ;

int main(){
	int a[3][3] ;
   
    while(cin >> a[0][0]){
        cin >> a[0][1] >> a[0][2]
            >> a[1][0] >> a[1][1] >> a[1][2]
            >> a[2][0] >> a[2][1] >> a[2][2] ;
       
        int array[6] ;
       
        array[0] = a[0][1] + a[0][2] + a[1][0] + a[1][1] + a[2][0] + a[2][2] ; 
        array[1] = a[0][1] + a[0][2] + a[1][0] + a[1][2] + a[2][0] + a[2][1] ; 
        array[2] = a[0][0] + a[0][1] + a[1][1] + a[1][2] + a[2][0] + a[2][2] ; 
        array[3] = a[0][0] + a[0][1] + a[1][0] + a[1][2] + a[2][1] + a[2][2] ; 
        array[4] = a[0][0] + a[0][2] + a[1][1] + a[1][2] + a[2][0] + a[2][1] ; 
        array[5] = a[0][0] + a[0][2] + a[1][0] + a[1][1] + a[2][1] + a[2][2] ; 
       
        int min = INT_MAX, j ;
       
        for(int i = 0; i < 6; i++){
            if(array[i] < min){
                min = array[i] ;
                j = i ;
            }
        }
       
        switch(j){
            case 0:
                cout << "BCG " << min << endl ;
                break ;
            case 1:
                cout << "BGC " << min << endl ;
                break ;
            case 2:
                cout << "CBG " << min << endl ;
                break ;
            case 3:
                cout << "CGB " << min << endl ;
                break ;
            case 4:
                cout << "GBC " << min << endl ;
                break ;
            case 5:
                cout << "GCB " << min << endl ;
                break ;
        }
    }
   
    return(0) ;
} 