#include <bits/stdc++.h>
using namespace std;

void showQueueElements(queue<int> first)
{
	queue<int> second = first;
	while (!second.empty())
	{
		cout << "\t" << second.front();
		second.pop();
	}
	cout << "\n";
}

int main(int argc, char const *argv[])
{
	queue<int> first;
	first.push(10);
	first.push(20);
	first.push(30);
	first.push(40);
	first.push(50);
	first.push(60);

	cout << "The Elements in the Queue are: ";
	showQueueElements(first);

	cout << "\nThe Size of the Queue is: " << first.size();
	cout << "\nThe Element at the Front is: " << first.front();
	cout << "\nThe Element at the Back is: " << first.back();

	cout << "\nPopping an Element from the Queue: ";
	first.pop();

	showQueueElements(first);
	return 0;
}
