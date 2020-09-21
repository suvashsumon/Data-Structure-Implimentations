#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(char* exp)
{
	stack <int> stk;
	int i;
	
	for(i=0; exp[i]; i++)
	{
		// if exp[i] is a space than ignore
		if(exp[i] == ' ') continue;
		
		// if exp[i] is a digit
		else if(isdigit(exp[i]))
		{
			int num = 0;
			
			// extract full number
			while(isdigit(exp[i]))
			{
				num = num * 10 + (int)(exp[i]-'0');
				i++;
			}
			
			i--;
			
			stk.push(num);
		}
		
		// if exp[i] is a operator
		else
		{
			int val2 = stk.top();
			stk.pop();
			int val1 = stk.top();
			stk.pop();
			
			switch(exp[i])
			{
				case '+':
					stk.push(val1 + val2);
					break;
				case '-':
					stk.push(val1 - val2);
					break;
				case '*':
					stk.push(val1 * val2);
					break;
				case '/':
					stk.push(val1 / val2);
					break;
				case '^':
					stk.push(pow(val1,val2));
					break;
			}
		}
	}
	return stk.top();
}

int main()
{
	//char exp[] = "5 6 2 + * 12 4 / -";
	char exp[] = "3 2 ^";
	cout << "Value: " << evaluatePostfix(exp);
	return 0;
}
