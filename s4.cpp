//fereshteh sadeghi
#include <iostream> 
#include <conio.h>  
#include <string.h> 

using namespace std;

int main()
{
    int a, i, n, min = 21, max = 0, sum = 0;
    cout << "Tedad daneshjuyan :\n";
    cin >> a;
    cout << "Nomarat ra vared konid :\n";
    for (i = 0; i < a; i++)
    {
        cin >> n;
       
        sum +=n ;
        if (n <= min)  min = n;
        if (n >= max)  max = n;
    }
    float avg = (float)sum / a;
    cout << "miangin :" << avg << "\n";
    cout << "min :" << min << "\n";
    cout << "max :" << max << "\n";

}