#include <iostream>
using namespace std;

int main(){
	int a,b,suma=0,i=0;
	
	cin >>a>>b;
	if(a>b){
		int c;
		a=c;
		a=b;
		b=c;
	}
	
	if (a<0 && b<0){
		for (int i=a;i<=b;i++){
		suma+=i;
	}
	}
	else{
	if (a<0){
		if(b<0){
			b=b*(-1);
			while(b>0){
				suma+=b;
				b-=1;
			}
		}
		a=a*(-1);
		while (a>0){
			suma+=a;
			a-=1;
		}
	}
	for (int i=a;i<=b;i++){
		suma+=i;
	}
}
	cout << suma;
}
