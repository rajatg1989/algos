#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string compress(string a) {
    string res;char prev=a[0];

int l=a.length();
    if(l<=2) return a;
    int tmp=l;
    int ctr=1;
    for(int i=1;i<l;i++) {
        if(prev!=a[i]) {
            stringstream ss;
            ss<<ctr;
            string a;
            ss>>a;
            res.push_back(prev);
            res+=a;
            ctr=1;
        }
        else {
            ctr++;
        }

        prev=a[i];
    }
        stringstream ss;
            ss<<ctr;
            string v;
            ss>>v;
        res.push_back(prev);
        res+=v;
    if(res.length()<l) return res;
    else return a;

}

string insert2(string a) {
    int l =a.length();
    int tmp=l,cnt=0;
    char* p = " ";

    while(tmp--) {
        a[tmp] = 'a';
        if(a[tmp]==' ') cnt++;
    }
    cout<<cnt;
    tmp=l;
    int n_len=l+2*cnt;
    a.resize(n_len);
    while(tmp--) {
        if(a[tmp]== ' ') {
            a[n_len-1]='0';
            a[n_len-2]='2';
            a[n_len-3]='%';
            n_len-=3;
        }
        else {
            a[n_len-1]=a[tmp];
            n_len--;
        }

    }
    return a;

}

int main()
{
    int a[20];
    memset(a,0,sizeof(int)*20);
    cout<<a[19];
    string g;
    getline(cin,g);
    cout<<compress(g);
    vector<int> vec(5,0);
    vec(5,1);

    //cout <<"string::"<<a<< endl;
    cin.ignore();
    cin.get();
    return 0;
}
