#include <bits/stdc++.h>
using namespace std;

int main(){
int a, b, c=0,d=0,h=0,g=0;
cin >> a;
int e[a];
char letra;
string frase, final;

getline(cin >> ws, frase);
getline(cin >> ws, final);


b = frase.length();

while (c<b){
    letra= frase[c];
    if (final[d]==letra){
        e[c] = d;
        c++;
        g++;
    }
    d++;
    if (d==a){
    	c=b;
	}
}
if (g==b){
	cout <<"YES\n";
	for (int i=0; i<g; i++){
		cout<<e[i]<<endl;
	}
}
else {
	cout <<"NO";
}

}
