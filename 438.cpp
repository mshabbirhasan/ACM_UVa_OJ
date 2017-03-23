#include<iostream>
#include<math.h>
#define PI 3.141592653589793

using namespace std;

int main(){	
	double circumference;
	double x1,y1,x2,y2,x3,y3;
	double a,b,c,s,l,r;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		a=0,b=0,c=0,s=0,l=0,r=0;

		a = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
		b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
		c = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

		s=(a+b+c)/(double)2;
		l = sqrt(s*(s-a)*(s-b)*(s-c));
		r = (a*b*c)/(double)(4*l);

		circumference = 2*PI*r;

		printf("%.2lf\n",circumference);
	}

	return 0;
}