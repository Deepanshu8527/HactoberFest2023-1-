 * C++ Program to Illustrate Inheritance
 */
#include <iostream>
 
class Base {
    protected:
        int data;
    public:
        Base(int val = 0) : data(val) { }
        int getData(void) const { return data; }
};
 
class Derived : public Base {
    public:
        void changeData(int val)
        {
            std::cout << "Change of Derived::data from "
                      << data << "->" << val << std::endl;
            data = val; 
        }
};
 
 
int main()
{
    Base b;
    Derived d;
 
    d.changeData(20);
    // getData is available to Derived Class
    std::cout << "Base Class data = " << b.getData() << std::endl;
    std::cout << "Derived Class data = " << d.getData() << std::endl;
}
