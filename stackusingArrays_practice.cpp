#include <iostream>
using namespace std;

template<class T>
class Stack
{
private:
	T *st;
	int size;
	int top;
public:
	Stack()
	{
		size = 10;
		top = -1;
		st = new T[size];
	}
	Stack(int size)
	{
		this->size = size;
		top = -1;
		st = new T[this->size];
	}
	void push(T x);
	T pop();
	T peek (int index);
	int stackTop();
	bool isEmpty();
	bool isFull();
	void display();
};

template<class T>
void Stack<T>:: push(T x)
{
	if(isFull())
	{
		cout << "Stack Overflow\n";
	}
	else
	{
		top++;
		st[top] = x;
	}
}

template<class T>
T Stack<T>:: pop()
{
	T x = -1;
	if(isEmpty())
	{
		cout << "Stack Underflow\n";
	}
	else
	{
		x = st[top];
		top--;
	}
	return x;
}

template<class T>
T Stack<T>::peek(int index)
{
	T x = -1;
	if(top - index + 1 < 0)
		cout << "Invalid Index\n";
	else
		x = st[top - index + 1];
	return x;
}

template<class T>
int Stack<T>::stackTop()
{
	if (isEmpty())
		return -1;
	return st[top];
}

template<class T>
bool Stack<T>::isFull()
{
	if(top == size - 1)
		return true;
	return false;
}

template<class T>
bool Stack<T>::isEmpty()
{
	if(top == -1)
		return true;
	return false;
}

template<class T>
void Stack<T>::display()
{
	for (int i = top; i >= 0; i--)
	{
		cout << st[i] << " ";
	}
	cout << endl;
}

int main()
{
	Stack<char> stk(6);
	stk.push('a');
	stk.push('b');
	stk.push('c');
	stk.push('d');
	stk.push('e');
	stk.push('f');

	stk.display();

	cout << endl;
	cout << stk.peek(1) << endl;
	cout << endl;
	cout << stk.isEmpty();
	return 0;
}
