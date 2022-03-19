#include <iostream>
#include <list>
using namespace std;

int main()
{
	list <int> l;
	double s = 0;
	for (int i = 1; i <= 10000; i++) {
		int n = rand() % 201 - 100;
		s += n;
		l.push_back(n);
	};
	for (int i : l)
		cout << i << ", ";
	cout << endl;
	cout << s / 10000;
}
