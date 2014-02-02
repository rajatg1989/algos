#include <iostream>
#include <map>
#include <list>
#include <unordered_map>
#include <queue>
#include <stdio.h>
#include <cstring>
#include <limits>
using namespace std;


void lru_insert(int inp,list<int>& l,unordered_map<int,list<int>::iterator>& m) {
        if(m.find(inp)!=m.end()) {
            unordered_map<int,list<int>::iterator>::iterator it;
            it=m.find(inp);
            list<int>::iterator it1;
            it1=it->second;
            l.erase(it1);
            //l.push_front(inp);

        }
        else {
            list<int>::iterator it_l=l.end();
            it_l--;

            m.erase(*it_l);
            l.erase(it_l);

            //l.push_front(inp);

        }
        //cout<<"pushing"<<inp;

        l.push_front(inp);
        m[inp]=l.begin();




}
int jump(int A[], int n) {
        bool isJump[n][n];
        int sol[n];
        sol[0]=0;
        memset(isJump,0,sizeof(bool)*n*n);
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(j-i<=A[i]) isJump[i][j]=1;
            }
        }

        for(int i=1;i<n;i++) {
            int mini=numeric_limits<int>::max();
            for(int j=0;j<i;j++) {
                if(isJump[j][i])
                mini = min(mini,sol[j]+1);
            }
            sol[i]=mini;
        }
        return sol[n-1];
    }
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        result.push_back(1);
        if(rowIndex==0) return result;
        result.push_back(1);
        if(rowIndex==1) return result;
        vector<int> f_res;

        for(int i=1;i<rowIndex;i++) {
            f_res.clear();
            f_res.push_back(1);
            for(int j=1;j<result.size();j++) {
                f_res.push_back(result[j-1]+result[j]);
            }
            f_res.push_back(1);
            result.clear();
            result=f_res;
            int si=result.size();
            while(si--)
             cout<<result[si];

            cout<<endl;
        }
        return f_res;

    }
int main()
{
    /*std::unordered_map<std::pair<int,int>,int> m1;
    unordered_map<int,list<int>::iterator> m;
    int a[] = {7,8,9,4,5};
    list<int> l;
    l.assign(a,a+5);
    list<int> tmp =l;
    for(list<int>::iterator it = l.begin();it!=l.end();it++) {
        m[*it] = it;
    }
   // lru_insert(4,l,m);
   // lru_insert (5,l,m);
    lru_insert(13,l,m);
    lru_insert(9,l,m);
    int size_l =l.size();
    for(list<int>::iterator it = l.begin();it!=l.end();it++) {
    cout<<*it;

    }

    queue<int> q;
    q.push(0);
    q.push(1);

    */
    //int A[] ={5,4,3,2,1};
    vector<int> res=getRow(3);
    cout<<res[0]<<res[1]<<res[2]<<res[3];
    cin.ignore();
    cin.get();
    return 0;
}
