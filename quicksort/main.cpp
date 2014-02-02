#include <iostream>

using namespace std;

int partition(int a[],int first,int last,int pivot) {
    if(last==first) return first;
    int i,j;
    j=first+1;
for(i=first+1;i<=last;i++) {
    if(a[i]<pivot) {
        swap(a[i],a[j]);
        j++;
    }

}
swap(a[first],a[j-1]);
return j-1;
}

void quicksort(int a[],int first,int last) {
    //cout<<first<<" "<<last<<" "<<sizeof(a);
    int pivot =a[first];
    int p_ind=partition(a,first,last,pivot);
    int si=(sizeof(a)/sizeof(a[0]));
    //cout<<si<<"size"<<sizeof(a)<<endl;
    cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8];
    cout<<endl;
    //cout<<first<<" "<<p_ind<<" "<<last<<endl;
    if(first<p_ind-1)
    quicksort(a,first,p_ind-1);
    if(p_ind+1<last)
    quicksort(a,p_ind+1,last);


}

int main()
{
    int a[] = {3,2,5,9,1,4,5,2,8};
    //int a[] = {1,2};
    quicksort(a,0,(sizeof(a)/sizeof(a[0]))-1);
    cout<<sizeof(a)<<"array"<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
