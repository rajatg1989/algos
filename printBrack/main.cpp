#include <iostream>
#include <string>
using namespace std;

void printBrack (int num,int ctr_o,int ctr_c,string s) {
    if (ctr_o>num||ctr_c>num) return;
    else if(ctr_c==num && ctr_o==num) {
            cout<<s<<endl;
            return;}
    else if(ctr_c>ctr_o) return;
    else {
            string o=s;
        if(ctr_o+1<=num)
        {
            //cout<<ctr_o<<ctr_c<<endl;
            //cout<<o<<endl;
            o+="(";
            //cout<<"(";
            printBrack(num,ctr_o+1,ctr_c,o);
           // cout<<endl;
        }
        if(ctr_c+1<=ctr_o)
        {
                //cout<<ctr_o<<ctr_c<<endl;
                //cout<<o<<endl;
                s+=")";
                //cout<<")";
                printBrack(num,ctr_o,ctr_c+1,s);
             //   cout<<endl;
        }


    }


}

int main()
{
    printBrack(4,0,0,"");
    //cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
