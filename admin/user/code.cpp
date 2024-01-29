#include<iostream>
using namespace std;
//Create a Base Class 1
class base_class 1
{
    //access specifer
    public
    //it is a member function
    void display 1 ()
    {
        cout<<"It is the first function of Base Class"<<endl;
    }
}
//Create a Base Class 2
class base_class 2
{
    //Access Specifer
    public
    //it is a Member Function
    void display 2 ()
    {
        cout<<"It is a Second Function of Base Class" <<endl;
    }
}
/* Create a Child Class to inheritr features of Base Class & Base_Class 2 with access specifer
class child_class public Base_Class 1 public Base_Class 2 */
{
    //access specifer
    public
    void display()
    // It is a Member Function of Dereive Class
    {
        cout<<"It is a Function of Derived class"<<endl;
    }
};
int main90
{
    // Create an object for Derived Class
    child_class ch;
    ch.display1()// Class Member Function of Base_Class 1
    ch.display2()// Class Member Function of Base_Class 2
    ch.display3()// Class Member Function of Child_Class
}
