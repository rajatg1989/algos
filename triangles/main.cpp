#include <iostream>
#include <vector>
using namespace std;
int sum(vector<vector<int> > &triangle,int i,int j) {
        if(i==triangle.size()-1) return triangle[i][j];
        int a = sum(triangle,i+1,j);
        int b = sum(triangle,i+1,j+1);
        if(b<a) { cout<<triangle[i][j]<<"right"<<endl;return (b+triangle[i][j]); }
        else {cout<<triangle[i][j]<<"left"<<endl;return (a+triangle[i][j]); }

    }
    int minimumTotal(vector<vector<int> > &triangle) {
        if(triangle.size()==1) return triangle[0][0];

        int a=sum(triangle,1,0);
        int b=sum(triangle,1,1);
        if(b<a) {
                return (b+triangle[0][0]);
                cout<<b<<endl;
        }
        else {
            return (a+triangle[0][0]);
            cout<<a<<endl;
        }

    }


int main()
{
    int a1[1] = {2};
    int a2[2] = {3,4};
    int a3[3] = {6,5,7};
    int a4[4] = {4,1,8,3};
    vector<vector<int> > input(4);
    input[0] = vector<int>(a1, a1+1);
    input[1] = vector<int>(a2, a2+2);
    input[2] = vector<int>(a3, a3+3);
    input[3] = vector<int>(a4, a4+4);
//    Solution sol;
    cout<<minimumTotal(input);
    cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
