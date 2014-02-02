#include <iostream>
#include <string>
using namespace std;


void partition_(int input[],const int& size) {
    int small=0,equal=0,large=size-1;
    int pivot =input[0];
    while(equal<=large) {
        if(input[equal]<pivot) {
            swap(input[small++],input[equal]);
        }
        else if(input[equal]==pivot) {
            ++equal;
        }
        else {
            swap(input[equal],input[large--]);
        }

    }




}


int main()
{
    int a[] = {5,4,3,4,2,8,6,1,5,5};    //
    int si=sizeof(a)/sizeof(a[0]);
    cout<<si<<endl;
    partition_(a,si);
    while(si--) cout<<a[si];
    cout<<a[0];
    for(int i=0;i<5;i++) {
        //cout<<(8>>1)<<endl;
    }
    cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
