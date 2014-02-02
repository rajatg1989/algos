#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

bool comp (pair<string,int> a, pair<string,int> b){

std::transform((a.first).begin(), (a.first).end(), (a.first).begin(), ::tolower);
std::transform((b.first).begin(), (b.first).end(), (b.first).begin(), ::tolower);


    if(a.second==b.second)
        return a.first<b.first;
        //return boost::algorithm::to_lower(a.first)<boost::algorithm::to_lower(b.first);
    return (a.second)>(b.second);


}

int main()
{

    //cout << "Hello world!" << endl;
    //string arr[] = {"Fee","Fo","Fee","Fo"};
//    enum names {"R","O","J"};
    stringstream ss;

    string a,b;
    int a1,b1;
    a="-6";b="-3";
    if(a[0]!='-') {
                    ss<<a;
                    ss>>a1;
                }
                else {
                    ss<<a[1];
                    ss>>a1;
                    a1*=(-1);
                    ss.clear();
                }
                if(b[0]!='-') {
                    ss<<b;
                    ss>>b1;
                }
                else {
                    ss<<b[1];
                    ss>>b1;
                    b1*=(-1);
                }

                cout<<a1<<b1;

    map<string,int> m;
    /*m["Fee"] = 4;
    m["Fo"] = 2;
    m["Fi"] = 3;
    m["Fum"] = 2;*/
    //m.assign(arr,arr+4);

    int n,no_w;
    cin>>no_w;
    map<string,int>::iterator it;
    for(int i=0;i<no_w;i++) {
        string a;
        cin>>a;
        it = m.find(a);
        if(it==m.end()) {
            m[a]= 1;
        } else {
            m[a]++;

        }
    }

    vector<pair<string,int>> vec;

    for(map<string,int>::iterator it=m.begin();it!=m.end();it++) {
        pair<string,int> p =make_pair(it->first,it->second);
        vec.push_back(p);
    }
    sort(vec.begin(),vec.end(),comp);
    cin>>n;

    for(int i=0;i<n;i++) {
        cout<<((vec[i]).first)<<endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
