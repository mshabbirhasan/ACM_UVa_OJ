#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){

	char str[10];
	float hour,minute, hourAngle, minuteAngle;
	float angle;

	while(gets(str)){
		
		if(!strcmp(str,"0:00"))
			break;
		
		if(strlen(str)==4){
			hour = (int)str[0]-48;
			minute = 10*((int)str[2]-48)+((int)str[3]-48);
		}

		else if(strlen(str)==5){
			hour = 10*((int)str[0]-48)+((int)str[1]-48);
			minute = 10*((int)str[3]-48)+((int)str[4]-48);			
		}
		
		hourAngle = (hour*30)+(minute*30/60);
		minuteAngle = (minute*6);
		
		angle = fabs(hourAngle-minuteAngle);
		
		if(angle>180)
			angle = 360-angle;

		printf("%.3f\n",angle);
	}

	return 0;
}