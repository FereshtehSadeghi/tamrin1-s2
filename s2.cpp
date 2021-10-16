//fereshteh sadeghi
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int h, m, s, a;
	cout << "Enter hour : \n";
	cin >> h;
	cout << "Enter minute :\n";
	cin >> m;
	cout << "Enter seccond : \n";
	cin >> s;
	h = h * 3600;
	if (m != 0) {
		m = m * 60;
	}
	a = h + m + s;


	cout << a;

}