#include <stdio.h>
#include<iostream>
using namespace std;

int main (){
    int fieldNumber = 1;
    int n = 0, m = 0;
    int flag = 0; // not to print a newline with the last output

    char mineArray[110][110];
    int outputArray[110][110];
    while (cin>>n>>m) {
        if (m == 0 && n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>mineArray[i][j];
            }
        }

        if(flag >= 1 )
            cout<<endl;

        cout<<"Field #"<< fieldNumber<<":"<<endl;

        for (int a = 0; a < n; a++){
            for(int b = 0; b < m; b++){
                outputArray[a][b] = 0;
            }
        }

        for (int k = 0; k < n; k++) {
            for (int l = 0; l < m; l++) {
                if (mineArray[k][l]=='*') {
                    outputArray[k-1][l]++; //up
                    outputArray[k+1][l]++; //down
                    outputArray[k][l-1]++; //left
                    outputArray[k][l+1]++; //right
                    outputArray[k-1][l-1]++; //top-left
                    outputArray[k-1][l+1]++; //top-right
                    outputArray[k+1][l-1]++; //bottom-left
                    outputArray[k+1][l+1]++; //bottom-right;
                }
            }
        }

        for(int x = 0; x < n; x++){
            for(int y = 0; y < m; y++){
                if(mineArray[x][y] == '*')
                    cout<<'*';
                else
                    cout<<outputArray[x][y];
            }
            cout<<endl;
        }
        fieldNumber++;
        flag++;
    }
    return 0;
}
