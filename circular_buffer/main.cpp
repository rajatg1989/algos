#include <iostream>
#include <deque>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class circular_buffer {
        deque<string> deq;
        int sz;
    public:
        circular_buffer () {}
        circular_buffer(int a) {
                if(a<0) {
                    cout<<"Buffer's size cant be negative";
                    return;
                }
                sz=a;
            }
        void inset(int n) {

            for(int i=0;i<n;i++)
            {   //string a(200000000,'x');
                string a;
                cin>>a;
                deq.push_back(a);
            }
            while(deq.size()>sz) {
                deq.pop_front();
            }
            //cout<<"inset finished";
        }

        void remve (int n) {
            for(int i=0;i<n;i++) {
                    if(deq.size()==0) {
                        cout<<"Buffer empty";
                        return;
                    }
                    deq.pop_front();

            }


        }
        void putq() {
            //cout<<"printing";
            int siz = deq.size();
            //cout<<siz;
            deque<string> tmp;
            tmp.assign(deq.begin(),deq.end());
            while(siz--) {
                cout<<tmp.front()<<endl;
                tmp.pop_front();
            }


        }



};


int main()
{
    //cout << "Hello world!" << endl;
    int sz;
    cin>>sz;
    cin.ignore();
    circular_buffer a(sz);

    while(1) {
        char command;
        int num=-1;
        string tmp_s="";
        //cin.ignore();
        getline(cin,tmp_s);
        stringstream ss;
        //cout<<"value of tmp_s is "<<tmp_s<<endl;
        ss<<tmp_s;
        ss>>command;
        ss>>num;
        ss.clear();
        //cout<<command<<num<<endl;
        //cin>>command>>num;

        if(command=='A') {
            a.inset(num);
        }
        else if(command=='R') {
            a.remve(num);
        }
        else if(command=='L') {
            a.putq();
        }
        else if(command=='Q') {
            exit(0);
        }
        else {

            //cout<<"wrong input";
        }

       /* switch(command) {
            case 'A':
                a.inset(num);
            case 'R':
                a.remve(num);
            case 'L':
                a.putq();
            case 'Q':
                exit(0);
            default:
                cout<<"wrong input";

        }*/

    }

    cin.ignore();
    cin.get();
    return 0;
}
