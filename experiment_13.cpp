/* 22070123095
Exp_13
*/
#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
demo() //default constructor
{
 a = 10;
}
demo(int x) //parameterized constructor
{
    a = x;
}
demo(demo&aa) //copy constructor
{
    a=aa.a;
}
void putdata()
{
    cout<<"\nA="<<a;
}
};
int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);

    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
} 
/*OUTPUT
A=10
A=20
A=10
*/
