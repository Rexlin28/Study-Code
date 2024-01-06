#include <bits/stdc++.h>

using namespace std;

int main(){
	std::string s;
	std::cin >> s;
	std::stack<char> my_stack;
	
	///// guardar elementos en el stack
	for(int i=0; i < s.length(); ++i) my_stack.push(s.at(i));
	int a=0,b=0;
	while(!my_stack.empty()){
		if(my_stack.top()=='(') a+=1;
		else b+=1;
		my_stack.pop();
	}
	if(a==b) cout << "SI\n";
	else cout << "NO\n";
	return 0;
}
