//fereshteh sadeghi
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int a, exit{}, sum = 0;
	cout << "adad ra vared kond\n";
	cout << "* note : untill you enter 'exit' the calculation continues\n";
	cin >> a;
	while (a != exit)
	{

		sum = sum + a;
		cin >> a;

	}
	cout << sum;
}