# include<iostream>
using namespace std;
    
/*program for operator  overloading using friend functions
    << is insertion operator
*/
class complex
{
    private:
	    int real;
	    int img;
    public:
        complex(int r=0,int i=0)
        {
            real=r;
            img=i;
        }
        void display()
        {
            cout<<real<<"+i"<<img<<endl;
        }
        friend ostream & operator<<(ostream &out,complex &c);
};
ostream & operator<<(ostream &out,complex &c)
{
	out<<c.real<<"+i"<<c.img<<endl;
	return out;
}
int main()
{
	complex c(10,5);
    c.display();
	cout<<c;
	operator<<(cout,c);
}