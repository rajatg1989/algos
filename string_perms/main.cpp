#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> gen_perms(const string& a,const int& len)
{
    vector<string> result;
    if(len==1) {
            string r;
            stringstream ss;
            ss<<a[0];
            ss>>r;
          //  cout<<r<<endl;
            result.push_back(r);
            return result;
    }
    vector<string> prev=gen_perms(a,len-1);

    string s ; s.push_back(a[len-1]);
    for(string a:prev) {
       for(int i=0;i<=a.length();i++) {
        string temp= a;
        temp.insert(i,s);
        //cout<<temp<<endl;
        result.push_back(temp);
        }
    }
    return result;

}
int main()
{
    string a="rajat";
    vector<string> result= gen_perms(a,5);
    int ctr=0;
    for(string a:result) {
            //cout<<a<<endl;
            ctr++;
    }
    //cout<<ctr;
    int g[] = {0,1,2,2,1};
    sort(g,g+5);
    int si=sizeof(g)/sizeof(g[0]);
    while(si--)
        cout<<g[si];
    cout << "Hello world!" << endl;

    return 0;
}
