#include <iostream>

using namespace std;

class A {
public:
    A(int a) {

        cout<<"A's constructor"<<a<<endl;

    }

};

class B {
public:
    B(int a) {

        cout<<"B's constructor"<<a<<endl;

    }

};

class C {
    int age;
    B b;
    A a;
public:
    C(A d,B e,int f):a(d),b(e)
    {
    cout<<"C's constructor"<<f<<endl;

    }

    C func() {

    }


};



int main()
{

    C c(4,5,6);
    cout << "Hello world!" << endl;
    return 0;
}
