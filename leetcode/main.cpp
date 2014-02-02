#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
class Sol {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> result;
        if(numRows<1) return result;
        vector<int> r,r1;

        r[0]=1;
        r1[0]=1;
        r1[1]=1;
        result[0]=r;
        if(numRows==1) {

            return result;
        }
        if(numRows>2) {
            result[1]=r1;
            numRows-=2;
        }
        vector<int> prev=r1;
        int ctr=2;
        while(numRows--) {
            ctr++;
            vector<int> tmp;
            for(int i=1;i<ctr-1;i++) {
                tmp[i]=prev[i-1]+prev[i];
            }
            result[ctr-1]=tmp;
            prev=tmp;
        }
        return result;

    }
};
class Solution {
    stack<string> s;
    //enum ops {"+","-","*","/"};
public:
    int evalRPN(vector<string> &tokens) {
        stringstream ss;
        int result;
        for(vector<string>::iterator it=tokens.begin();it!=tokens.end();it++) {
            if(tokens.size()==1) {
                ss<<tokens[0];
                ss>>result;
                ss.clear();
                return result;

                }
            if(*it== "+"||*it=="-"||*it=="*"||*it=="/") {
                int a1,b1;
                string a=s.top();
                s.pop();
                string b=s.top();
                s.pop();
                cout<<"popping :"<<a<<b<<"  "<<*it<<" ";
                if(a[0]!='-') {
                    ss<<a;
                    ss>>a1;
                    ss.clear();
                }
                else {
                    a.erase(a.begin());
                    ss<<a;
                    ss>>a1;
                    ss.clear();
                    a1*=(-1);
                    //cout<<a1<<"after proc";
                }
                if(b[0]!='-') {
                    ss<<b;
                    ss>>b1;
                    ss.clear();
                    //cout<<b1<<"after proc";
                }
                else {
                    b.erase(b.begin());
                    ss<<b;
                    ss>>b1;
                    b1*=(-1);
                    ss.clear();
                }

                string res;
                if(*it=="+") result =b1+a1;
                else if(*it=="-") result =b1-a1;
                else if(*it=="*") result =b1*a1;
                else if(*it=="/") {
                    //if(a1!=0)
                    result =b1/a1;
                    }
                ss<<result;
                ss>>res;
                ss.clear();
                cout<<result<<endl;
               s.push(res);

            }
            else {
                s.push(*it);
            }
        }
        return result;

    }
};
int main()
{
    Sol a;
    a.generate(1);
    cin.ignore();
    cin.get();
    return 0;
}
