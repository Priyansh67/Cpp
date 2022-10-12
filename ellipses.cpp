#include <iostream>
#include <cstdarg>
using namespace std;

/*program for ellipsis
    i.e, variable number of arguments passed in func
*/
int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int x;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        x = va_arg(list, int);
        s += x;
    }
    va_end(list);
    return s;
}
int main()
{
    cout << sum(3, 10, 20, 30) << endl;
    cout << sum(5, 1, 2, 3, 4, 5) << endl;
}