#include <iostream>
using namespace std;

int main(){
    float a,b,c,d=0,i=0;
    cin >> a >> b;
    if (a<b){
	
    	c= b-a;
    //	if (c==0){	}
	//	else
       while(i<=c){
       	d+=a;
       	a++;
       	i++;
	   }
	}
    else{
	
    	c= a-b;
    	//if (c==0){}
		//else
   	   while (i<=c){
   	   	d+=b;
   	   	b++;
   	   	i++;
		  }
    }
    cout << d;
    }
