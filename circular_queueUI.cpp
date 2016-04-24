#include <iostream>
using namespace std;
#include "circular_queue.h"
#include "circular_queue.cpp"

int main()
{
	cout << "You have a circular queue of length 10\nInstructions: \n+ <int> will enqueue\n- will dequeue\nl will return length of queue\np will peek\ne will exit the program" << endl;	
	char a;
	int b;
	circular_queue<int> q(10);
	while (a != 'e')
	{
		cin >> a;
		if (a == '+')
		{
			cin >> b;
			q.enqueue(b);
		}
		else if (a == '-')
			cout << "Dequeue : " << q.dequeue() << endl;		
		else if (a == 'p')
			cout << "Peek : " << q.peek() << endl;
		else if (a == 'l')
			cout << "Length : " << q.length() << endl;
		else if (a == 'e')
			cout << "Exiting.." << endl;
		else
			cout << "Unknown Command" << endl;
	}
}
