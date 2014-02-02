#include <iostream>
#include <string>
using namespace std;

template <class T>
void display(T x,T y) {
    cout<<"Temp "<<x<<y;

}


int main()
{
    //display("a","o");
    int x=-1;
    try {
      cout << "Inside try \n";
      if (x < 0)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
      cout<<"if there is no need;"<<endl;
   }
  /* catch (int x ) {
      cout << "Exception Caught \n";
   }*/
   cout<<"after all";
    //display("o");
    cout << "Hello world!" << endl;
    return 0;
}
