#include <iostream>

using namespace std;
typedef long long uint64;


int main()
{
    uint64 si,mult=1;
    cin>>si;
    int no_zeros=0;                                 // for handling the cases of 0's IN input ARRAY
    uint64 inp[si],res[si];
    //int tmp=si;
    for(int i=0;i<si;i++) {
      cin>>inp[i];

    }
    int tmp=si;
    while(tmp--) {
        if(inp[tmp]==0) {
            no_zeros++;
        }

    }
    tmp=si;

    if(no_zeros>1) {
        while(tmp--) {
            res[tmp]=0;
        }
    }
    else if(no_zeros==1) {
        tmp=si;
        while(tmp--) {
            if(!inp[tmp]==0) {
                mult*=inp[tmp];
            }
        }
        tmp=si;
        while(tmp--) {
            if(inp[tmp]==0) {
               res[tmp] =mult;
            } else {
                res[tmp] =0;
            }
        }
    }
    else {
        tmp=si;
        while(tmp--) {
                //cout<<tmp<<" nozeros"<<endl;
                mult*=inp[tmp];

        }
        tmp=si;
        //cout<<mult<<endl;
        while(tmp--) {

               res[tmp] =mult/inp[tmp];

        }
    }
    tmp=si;
       for(int i=0;i<tmp;i++) {
            cout<<res[i]<<endl;
        }
    //cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
