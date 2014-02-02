#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file("try.txt");
    /*file.seekp(0,ios_base::end);
    file<<"rajat"<<endl;
    file<<"garg";
    file.close();*/
    ifstream file1;
    file1.open("try.txt");

    int file_size=file.tellg();
    cout<<file_size;
    file1.seekg(-1-file_size,ios_base::end);
     string line;
     if(file1.is_open()) {
     while(getline(file1,line)) {

       // file1>>;
        cout<<line<<endl;
     }
     } else {
        cout<<"something wrong";

     }
     file1.close();



    cout << "Hello world!" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
