#include <iostream>
#include <vector>
#include <sstream>
#include <typeinfo>
using namespace std;

class base {

       static  int var;
    public:
        int var1;
        base (int i=0) {
            prot=0;
            var1 =0;
            cout<<" base constructor "<<i<<endl;
        }
        ~base() {
            cout<<" base destructor"<<endl;
        }
        virtual void func (int num)
        {
            cout<<"base function"<<endl;
            var=num;

        }
        void funcget() {
            cout<<var;

        }
    protected:
        int prot;


};



class derived:public base {
    public:
        derived () {
            cout<<" der constructor "<<endl;
        }
        ~derived() {
            cout<<" der destructor"<<endl;
        }
        void func (int num ) {
           // cout<<var<<endl;
            cout<<"der function"<<num<<endl;

        }

};
int modify(int& l) {
l*=2;
return l;
}
int base::var=2;
int main()
{  /* stringstream ss;
    int n=2355;string tmp;
    ss<<n;
    ss>>tmp;
    cout<<tmp.length();
    vector<int> a;
    a.push_back(0);
    a.push_back(1);*/
int l=7;

    //cout<<modify(l);
//    base *d = new base();

    //d->func();
    //cout<<endl;
    base d ;
    d.funcget();
    cout<<endl;
    d.func(12);
    d.funcget();
    cout<<endl;
    derived b;
    //cout<<b.prot<<"public"<<endl;
    //derived d;
//  d->func(11);
    //b->funcget();
    b.func(24);
    //base *b1 = new base();
    //b1->func(23);
    //b->funcget();
    //b1->funcget();
    //delete b;
    int a=10;
    cout<<typeid(a).name()<<endl;
    cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
