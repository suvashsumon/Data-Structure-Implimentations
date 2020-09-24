#include<bits/stdc++.h>
using namespace std;

stack <char> stk;
stack <char> postfix;

void rmOparetor(int pos){
	while(true) {
		char ts = stk.top();
		if(ts == '(' || ts == ')') {
			break;
		}
		else {
			for(int i=0; i<= pos; i++){
				if(optr[i]==)
			}
		}
	}
}

char * toPostfix(char * arg){
	stk.push('(');
	int i = 0;
	while(arg[i]){
		if(arg[i]==' ') postfix.push(' ');
		else if(arg[i] == '(') stk.push(arg[i]);
		else if(isdigit(arg[i])) postfix.push(arg[i]);
		else if(arg[i] == ')') {
			while(true) {
				char ts = stk.top();
				if(ts == '(') {
					stk.pop();
					break;
				}
				else {
					postfix.push(ts);
				}
			}
		}
		else {
			switch(arg[i]){
				case '^':
					rmOparetor(0);
					break;
				case '/':
					rmOparetor(1);
					break;
				case '*':
					rmOparetor('2);
					break;
				case '+':
					rmOparetor(3);
					break;
				case '-':
					rmOparetor(4);
					break;
			}
		}
		i++;
	}
}


int main()
{
	string infix;
	cout << "Enter your infix expression: ";
	getline(cin, infix);
	char * lol = &infix[0];
	//toPostfix(lol);
	cout << infix;
	return 0;
}

