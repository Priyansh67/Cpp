#include <iostream>
#include <memory>
using namespace std;

/*program for using unique pointer
    it will delete the dynamic memory by itself
*/
class rectangle
{
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    unique_ptr<rectangle> ptr(new rectangle(10, 5));
    cout << ptr->area() << endl;
    unique_ptr<rectangle> ptr2;
    ptr2 = move(ptr);
    cout << ptr2->area();
}