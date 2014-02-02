#include <iostream>
#include <sstream>
#include <queue>
using namespace std;
void reverse(char *str)
{
   if(*str)
   {
       reverse(str+1);
       cout<<str[0];
   }
}
struct Node {
Node *right = NULL;
Node *left = NULL;
int val;

};

string dec2bin(int num, int b) {
    if(num==0) return "0";
    int temp = num%b;
    stringstream ss;
    ss<<temp;
    string tmp = ss.str();

    return dec2bin(num/b,b)+tmp;

}

void t_insert(Node *root,int a) {

    Node *tmp = root;
    Node *prev =tmp;
    while(tmp!=NULL)
    {
        prev =tmp;
        if(tmp->val<=a) tmp=tmp->right;
        else tmp=tmp->left;

    }

    Node *n_node= new Node();
    if(prev->val<=a)
    prev->right = n_node;
    else
    prev->left = n_node;
    n_node->val=a;


}

void print(Node *root) {
    if(root==NULL) return;
    print(root->left);
    cout<<root->val;
    print(root->right);

}

int main()
{


    reverse("rajat");
    //cout<<dec2bin(234,3);
    Node root;
    root.val=5;
    t_insert(&root,18);
    t_insert(&root,-4);
    t_insert(&root,2);
    t_insert(&root,3);
    t_insert(&root,-6);
    t_insert(&root,1);
    t_insert(&root,1);
    queue<Node*> q;
    q.push(&root);
    cout<<q.size()<<"size"<<endl;
    Node *tmp = &root;
    while(q.size()!=0) {
        Node *temp = q.back();
        bool flag=1;
        while(flag) {
               if ( q.front()==temp) flag=0;
            Node *tmp2 = q.front();
            cout<<tmp2->val<<" ";
            q.pop();
            if(tmp2->left)
            q.push(tmp2->left);
            if(tmp2->right)
            q.push(tmp2->right);

        }
        cout<<endl;
    }
    //print(&root);
    //cout << "Hello world!" << endl;
    cin.get();
    cin.ignore();
    return 0;
}
