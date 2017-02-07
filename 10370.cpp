#include<iostream>

using namespace std;

int main(){
	int i=0,j,k,counter,totalMarks,studentArray[1050], noOfCases, noOfStudents;
	float average,percentage;
	char symbol='%';

	cin>>noOfCases;

	while(i<noOfCases){
		cin>>noOfStudents;
		j=0;
		totalMarks=0;
		while(j<noOfStudents){
			cin>>studentArray[j];
			totalMarks=totalMarks+studentArray[j];
			j++;
		}
		average=0;
		average=(float)totalMarks/noOfStudents;
		k=0;
		counter=0;
		while(k<noOfStudents){
			if(studentArray[k]>average)			
				counter++;
			k++;
		}
		percentage = (float)counter/noOfStudents;
		printf("%.3f%c\n",percentage*100,symbol);
		i++;
	}
	return 0;
}