#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void printpermut(vector<int> vec,vector<int> toprint) {

    //cout<<"as"<<vec.size()<<" ert"<<endl;
    for(int i=0;i<toprint.size();i++) {
        cout<<toprint[i];
    }
if(vec.size()==1) {
    cout<<vec[0]<<endl;
}
else {

    for(int i=0;i<vec.size();i++) {
        vector<int> tmp1 =toprint;
        //cout<<vec[i];
        tmp1.push_back(vec[i]);
        vector<int> tmp=vec;
        tmp.erase(tmp.begin()+i);
        printpermut(tmp,tmp1);
        //cout<<endl;

    }
}

}
int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        vector<int> temp;
        queue<int> q;
        for(int i=0;i<gas.size();i++)
        {
            int n= gas[i]-cost[i];
            temp.push_back(n);
        }
        int sum=0;
        if(temp.size()==1 && temp[0]>=0) return 0;

        for(int i=0;i<gas.size();i++) {
            sum+=temp[i];
        }
        if(sum<0) return -1;

        int ctr=0,i=0,j=0;
        sum=0;
        while(1) {
            sum+=temp[i];
            q.push(temp[i]);
            while(sum<0) {
                sum=sum-q.front();
                q.pop();
                j++;

            }

            if(q.size()==temp.size()) return j;

            i++;
            if(i==temp.size()) i=0;
        }

    }
int main()
{

    //cout << "Hello world!" << endl;
    //int a[4]= {1,2,3,4};
    //vector<int> vec(a,a+4),toprint;
    vector<int> a,b;
    a.push_back(4);
    b.push_back(5);
    cout<<canCompleteCircuit(a,b);
    //rmut(vec,toprint);

    cin.ignore();
    cin.get();
    return 0;
}
