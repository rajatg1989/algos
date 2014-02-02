#include <iostream>
#include <map>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

void move_seq(int no,char src,char dest,char aux) {
    if(no==1) {
        cout<<" move "<<no<<" from "<<src<<" to "<<dest<<endl;
        return;
    }

    move_seq(no-1,src,aux,dest);
    cout<<"move"<<no<<" from "<<src<<" to "<<dest<<endl;
    move_seq(no-1,aux,dest,src);

}
int main()
{
    //cout << "Hello world!" << endl;
    move_seq(3,'a','b','c');
    cin.ignore();
    cin.get();
    return 0;
}
