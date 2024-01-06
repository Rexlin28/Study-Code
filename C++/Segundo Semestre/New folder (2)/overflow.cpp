#include<iostream>
#include<exception>
#include<bits/stdc++.h>
using namespace std;


int main()
{
char x=2, y=3,total=0;
for (size_t i = 0; i < 1000; i++)
{
try{
cout<<(short)total<<endl;
total = x* y + total;

if (total>=127||total<= -128){
	exception overflow_error;
}
	
/* code */

//*	if(total>127||total<-128) 
		//explicit overflow_error(const string& what_arg);
		 
}catch(overflow_error &e){
	cout<<"Overflow exception: "<<e.what();
}
}

}
