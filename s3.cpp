//fereshteh sadeghi
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int s, t, h, m;
	cout << "Enter time : \n";
	cout << "Note : Input format in seconds\n";
	cin >> t;
	h = t / 3600;
	m = t%3600 / 60;
	s = t %3600 % 60;
	cout << h << m<<s;
}