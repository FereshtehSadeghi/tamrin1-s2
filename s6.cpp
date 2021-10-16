//fereshteh sadeghi	
#include <iostream> 
#include<math.h>
#include<conio.h>

void fib(int n);
using namespace std;

int main()
{
    int n;
    cout << "Adad fibonachi ra vard konid:\n";
    cin >> n;
    fib(n);
    return 0;
}
void fib(int n)
{
    int a = 1, b = 1;
    int c;
    cout << a << endl;
    cout << b << endl;
    int i = 2;
    while (i < n)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        i++;
    }
}