#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack
{
	int top;

public:
	int a[MAX];
	Stack()
	{
		top = -1;
	}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack:: push(int x)
{
	if(top >= (MAX - 1))
	{
		cout << "Stack Overflow";
		return false;
	}
	else
	{
		a[++top] = x;
		cout << x << " pushed into Stack\n";
		return true;
	}
}

int Stack:: pop()
{
	if (top < 0)
	{
		cout << "Stack Underflow";
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

int Stack:: peek()
{
	if(top < 0)
	{
		cout << "Stack is Empty ";
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}

bool Stack:: isEmpty()
{
	return (top < 0);
}

int main()
{
	class Stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);
	st.push(70);

	cout << st.pop() << " is popped from the Stack\n";
	cout << "Elements present in the Stack are: ";
	while (!st.isEmpty())
	{
		cout << st.peek() << " ";
		st.pop();
	}

	return 0;
}
