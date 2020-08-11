#include<bits/stdc++.h>
using namespace std;

class Stack
{
	public:
		int maxsize;
		int top;
		int stack[100];
		int size;
		
		// constractor
		Stack(int msize)
		{
			size = 0;
			top = -1;
			maxsize = msize;
		}
		
		// this function returns the top value from stack
		int getTop()
		{
			if(size == 0)
			{
				cout << "No element in the stack" << endl;
			}
			else
			{
				return stack[top];
			}
		}
		
		// this function returens the current size of stack
		int getSize()
		{
			return size;
		}
		
		// this function add a new item at the end of stack if the stack is not full yet
		int push(int item)
		{
			if(top + 1 == maxsize)
			{
				cout << "OVERFLOW : The stack is full" << endl;
			}
			else
			{
				stack[top+1] = item;
				top++;
				size++;
			}
		}
		
		// this function remove the last element from stack if the stack has atleast one element
		int pop()
		{
			if(top == -1)
			{
				cout << "UNDERFLOW : The stack is empty" << endl;
			}
			else
			{
				top--;
				size--;
				return stack[top+1];
			}
		}
		
		// this function prints all elements from stack
		void printStack()
		{
			if (top == -1)
			{
				cout << "No element in the stack" << endl;
			}
			else
			{
				cout << "The elements of stack : ";
				for(int i=0; i<=top; i++)
				{
					cout << stack[i] << " ";
				}
				cout << endl;
			}
		}
};

int main()
{
	int m;
	Stack man = Stack(5);
	man.push(1);
	cout << "The size is now : " << man.getSize() << endl;
	cout << "Top element is : " << man.getTop() << endl;
	cout << "We remove this : " << man.pop() << endl;
	man.push(1);
	man.push(2);
	man.push(3);
	man.push(4);
	man.push(5);
	man.push(6);
	man.push(7);
	man.push(8);
	man.push(9);
	man.push(10);
	man.pop();
	man.push(11);
	man.printStack();
	man.push(12);
	man.pop();
	man.push(13);
	cout << "The size is now : " << man.getSize() << endl;
	man.printStack();
	return 0;
}
