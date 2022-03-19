#include <iostream>
#include <fstream>
#include <list>
using namespace std;

int main()
{
	ifstream in("1.txt");
	list <int> l={};
	int s = 0;
	double k = 0;
	while (!in.eof()) {
		int n;
		in >> n;
		k++;
		s += n;
		l.push_back(n);
	}
	l.sort();
	for (int i : l)
		cout << i << ", ";
	cout << endl;
	cout << s / k;
}
