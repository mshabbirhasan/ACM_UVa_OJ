#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,d,e,f,g,h,i;
	while((scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i))!=EOF){
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0 && i==0)
			cout<<"0";
		if(a!=0){
			if(a<0){
				if(a==-1)
					cout<<"-x^8";
				else
					cout<<"-"<<a*(-1)<<"x^8";
			}
			else if(a==1)
				cout<<"x^8";
			else
				cout<<a<<"x^8";
		}
		if(b!=0){
			if(b==-1){
				if(a==0)
					cout<<"-"<<"x^7";
				else
					cout<<" - "<<"x^7";
			}			
			else if(b<0 && b!=-1){
				if(a==0)
					cout<<"-"<<b*(-1)<<"x^7";
				else
					cout<<" - "<<b*(-1)<<"x^7";
			}
			else if(b==1){
				if(a==0)
					cout<<"x^7";
				else
					cout<<" + "<<"x^7";
			}
			else{
				if(a==0)
					cout<<b<<"x^7";
				else
					cout<<" + "<<b<<"x^7";
			}
		}
		if(c!=0){
			if(c==-1){
				if(a==0 && b==0)
					cout<<"-"<<"x^6";
				else
					cout<<" - "<<"x^6";
			}			
			else if(c<0 && c!=-1){
				if(a==0 && b==0)
					cout<<"-"<<c*(-1)<<"x^6";
				else
					cout<<" - "<<c*(-1)<<"x^6";
			}
			else if(c==1){
				if(a==0 && b==0)
					cout<<"x^6";
				else
					cout<<" + "<<"x^6";				
			}
			else{
				if(a==0 && b==0)
					cout<<c<<"x^6";
				else
					cout<<" + "<<c<<"x^6";				
			}
		}
		if(d!=0){
			if(d==-1){
				if(a==0 && b==0 && c==0)
					cout<<"-"<<"x^5";
				else
					cout<<" - "<<"x^5";
			}			
			else if(d<0 && d!=-1){
				if(a==0 && b==0 && c==0)
					cout<<"-"<<d*(-1)<<"x^5";
				else
					cout<<" - "<<d*(-1)<<"x^5";
			}
			else if(d==1){
				if(a==0 && b==0 && c==0)
					cout<<"x^5";
				else
					cout<<" + "<<"x^5";			
			}
			else{
				if(a==0 && b==0 && c==0)
					cout<<d<<"x^5";
				else
					cout<<" + "<<d<<"x^5";			
			}
		}
		if(e!=0){
			if(e==-1){
				if(a==0 && b==0 && c==0 && d==0)
					cout<<"-"<<"x^4";
				else
					cout<<" - "<<"x^4";
			}			
			else if(e<0 && e!=-1){
				if(a==0 && b==0 && c==0 && d==0)
					cout<<"-"<<e*(-1)<<"x^4";
				else
					cout<<" - "<<e*(-1)<<"x^4";
			}
			else if(e==1){
				if(a==0 && b==0 && c==0 && d==0)
					cout<<"x^4";
				else
					cout<<" + "<<"x^4";			
			}
			else
			{
				if(a==0 && b==0 && c==0 && d==0)
					cout<<e<<"x^4";
				else
					cout<<" + "<<e<<"x^4";			
			}
		}
		if(f!=0)
		{
			if(f==-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 )
					cout<<"-"<<"x^3";
				else
					cout<<" - "<<"x^3";
			}			
			else if(f<0 && f!=-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 )
					cout<<"-"<<f*(-1)<<"x^3";
				else
					cout<<" - "<<f*(-1)<<"x^3";
			}
			else if(f==1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 )
					cout<<"x^3";
				else
					cout<<" + "<<"x^3";			
			}
			else
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 )
					cout<<f<<"x^3";
				else
					cout<<" + "<<f<<"x^3";			
			}
		}
		if(g!=0)
		{
			if(g==-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
					cout<<"-"<<"x^2";
				else
					cout<<" - "<<"x^2";
			}			
			else if(g<0 && g!=-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
					cout<<"-"<<g*(-1)<<"x^2";
				else
					cout<<" - "<<g*(-1)<<"x^2";
			}
			else if(g==1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
					cout<<"x^2";
				else
					cout<<" + "<<"x^2";			
			}
			else
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
					cout<<g<<"x^2";
				else
					cout<<" + "<<g<<"x^2";			
			}
		}
		if(h!=0)
		{
			if(h==-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0)
					cout<<"-"<<"x";
				else
					cout<<" - "<<"x";
			}			
			else if(h<0 && h!=-1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0)
					cout<<"-"<<h*(-1)<<"x";
				else
					cout<<" - "<<h*(-1)<<"x";
			}
			else if(h==1)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0)
					cout<<"x";
				else
					cout<<" + "<<"x";			
			}
			else
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0)
					cout<<h<<"x";
				else
					cout<<" + "<<h<<"x";			
			}
		}
		if(i!=0)
		{
			if(i<0)
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0)
					cout<<"-"<<i*(-1);
				else
					cout<<" - "<<i*(-1);
			}
			else
			{
				if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0 && g==0 && h==0)
					cout<<i;
				else
					cout<<" + "<<i;			
			}

		}
		cout<<endl;
	}
	return 0;
}