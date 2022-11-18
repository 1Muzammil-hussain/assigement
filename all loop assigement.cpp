/*
Name:
					Muzammil Hussain
Department:
   					BS-Data Science
Session:
					2022 - 2026
Subject:
					Programming Foundament

Semester:
						1st
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	     cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t          FOR loop              \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	for(int n=1;n<=10;n++){
		if(n==5)
		{
		continue;
	}
	else
		cout<<"\t\t\t\t\t"<<n<<"\t"<<n*n<<endl;
	}
        cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t          while loop           \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	int n=1;
	while(n<=10){
		if(n==5){
			// do nothing (skip 5)
			}
			else{
			cout<<"\t\t\t\t\t"<<n<<"\t"<<n*n<<endl;
			
			}
	n++;
	}
	
	     cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t         do while loop          \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	n=1;
	do{
	
		if(n==5){
		n++;
	continue;	
			}
			else{
			cout<<"\t\t\t\t\t"<<n<<"\t"<<n*n<<endl;
			n++;
			}
	}while(n<=10);
}