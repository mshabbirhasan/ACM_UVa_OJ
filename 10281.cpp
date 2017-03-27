#include<iostream>

using namespace std;

int main(){
	
	char input[2000];
	int n, hour,min,sec,now,speed=0,oldTime=0,newSpeed;
	float distance=0;

	while(gets(input)){
		n = sscanf(input,"%d:%d:%d %d",&hour,&min,&sec,&newSpeed);
		now = (hour*3600)+(min*60)+sec;
		distance = distance+((now-oldTime)/3600.0)*speed;
		oldTime = now;
		
		if(n==3)
			printf("%02d:%02d:%02d %.2f km\n",hour,min,sec,distance);
		
		else if(n==4)
			speed = newSpeed;	
	}

	return 0;
}