//fereshteh sadeghi
#include<iostream>
#include<random>
using namespace std;
int main()
{
	int a;
	srand(time(0));
	a = rand() % 6+1;
	if (a == 6)
		cout << "Another turn\n";
	srand(time(0));
		a = rand() % 6+1;
	cout << a;
}