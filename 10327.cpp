#include<iostream>

using namespace std;

int main(){
	int array[1050], numberOfMembers,i,x,y,count,temp;
	
	while(cin>>numberOfMembers){
		i=0;
		while(i<numberOfMembers){
			cin>>array[i];
			i++;
		}
		count=0;
		temp=0;
		for(x=1; x<=numberOfMembers; x++){
			for(y=1; y<=numberOfMembers-x; y++){
				if(array[y-1]>array[y]){
					temp = array[y-1];
					array[y-1] = array[y];
					array[y] = temp;
					count++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<count<<endl;
	}
	return 0;
}