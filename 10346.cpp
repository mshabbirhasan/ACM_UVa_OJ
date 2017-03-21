#include<iostream>

using namespace std;

int main(){
	int totalCig, n, k, butt;

	while(cin>>n>>k){		
		totalCig = 0;
		butt=0;
		while (n>0) {
			totalCig = totalCig+n;
			butt = butt+n;
			n = butt/k;
			butt = butt%k;
		}
		cout<<totalCig<<endl;
	}
	return 0;
}