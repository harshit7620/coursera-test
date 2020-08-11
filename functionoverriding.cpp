#include<iostream>
using namespace std;
class base
{
public:void display()
{
cout<<"\n it is base class ";
}
};
class derived:public base
{
cout<<"\n derived class";
}
};
void main()
{
base b;
derived d;
clrscr();
b.display();
d.display();
getch();
}
