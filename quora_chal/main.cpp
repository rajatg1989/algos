#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#define eps 0.001

using namespace std;

float x, y;
bool comp(pair<int,pair<float,float>> in1, pair<int,pair<float,float>> in2) {
        pair<float,float> a=in1.second;
        pair<float,float> b=in2.second;
        float da=(a.first-x)*(a.first-x)+(a.second-y)*(a.second-y);
        float db=(b.first-x)*(b.first-x)+(b.second-y)*(b.second-y);
        if(abs(da-db)<eps) return in1>in2;
        else return da<db;

}

void printtop(vector<int,pair<float,float>> topics,int n) {


    sort(topics.begin(),topics.end(),comp);
    for(int i=0;i<n;i++) cout<<




}
int main()
{

    int t,q,n;
    /*stringstream ss;
    string str;
     getline(cin,str);
     cout<<str<<endl;
     for(int k=0;k<str.length();k++)
     {
         ss.clear();
         if(str[k]!=' ') {
            ss<<str[k];
            int i;
            ss>>i;
            cout<<i<<" ";
         }
     }
     return 0;
     */
    cin>>t>>q>>n;

    vector<pair<int,pair<float,float>>> topics;
    for(int i=0;i<t;i++) {
        int t_id;
        float x1,y1;
        cin>>t_id>>x1>>y1;
        pair<float,float> tmp = make_pair(x1,y1);
        pair<int,pair<float,float>> tmp1;
        tmp1 = make_pair(t_id,tmp1);
        topics.push_back(tmp1);
    }

    unordered_map<int,vector<int>> ques;
    for(int i=0;i<q;i++) {
        stringstream ss;
        string str;
        getline(cin,str);
        ss<<str;
        int id;
        ss>>id;
        vector<int> temp;
        while(ss) {
            int l;
            ss>>l;
            temp.push_back(l);
        }
        ques[id] =temp;
       // int q_id;



    }

    for(int i=0;i<n;i++) {
        char ch;
        int no;
        //float x,y;
        cin>>ch>>no>>x>>y;

        if(ch=='t') {
               printtop(topics,no);
               vector<id,int> dist_top;

        }

    }

    cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
