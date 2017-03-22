#include<iostream>
#include<math.h>
#define PI 3.14159265358979

using namespace std;

int main(){
	double radius=0, side=0, area=0, angle=0;
	
	while(cin>>radius>>side){		
		angle = (360/(double)side)*(PI/(double)180);
		area = side*.5*radius*radius*sin(angle);

		printf("%.3lf\n",area);
	}
	return 0;
}