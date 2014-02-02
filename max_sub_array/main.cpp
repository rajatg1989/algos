#include <iostream>

using namespace std;

int main()
{
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
   // cout<<INT_MIN;
    int f=0,l=0,f_max=0,l_max=0;int max_sum=a[0];
    int temp_sum=a[0];// temp_sum is max subarray ending here
    for(int i=0;i<9;i++) {

        if(temp_sum<0) {
            temp_sum=a[i];
            f=i;l=i;

        }
        else {
            temp_sum+=a[i];
            l++;
            if(max_sum<temp_sum) {
                f_max=f;
                l_max=l;
            }

        }
        max_sum = max(max_sum,temp_sum);

    }
    cout << max_sum <<":: index"<<f_max<<" "<<l_max<<endl;
    cin.ignore();
    cin.get();
    return 0;
}
