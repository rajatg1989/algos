#include <iostream>

using namespace std;

void merge_r (int inp_1[],int first,int mid,int last) {
        int size_a=mid-first+1;
        int inp_a[size_a];
        for(int i=0;i<size_a;i++)
            inp_a[i] =inp_1[first+i];
        int size_b=last-mid;
        int inp_b[size_b];
        for(int i=0;i<size_b;i++)
            inp_b[i] =inp_1[mid+1+i];
    int size_o=size_a+size_b;

    int i=0,j=0,it=first;
    while(i<size_a && j<size_b) {
        if(inp_a[i]<inp_b[j]) {
            inp_1[it] =inp_a[i];i++;
        }
        else {
            inp_1[it]=inp_b[j];j++;
        }
        it++;
    }
    while(i<size_a) {
        inp_1[it]=inp_a[i];
        i++;
        it++;
    }

    while(j<size_b) {
        inp_1[it]=inp_b[j];
        j++;
        it++;

    }

   // return output;
}

void mergeSort(int inp[],int first,int last) {
int size_=last-first+1;
    if(size_<=1 ) return;
    else if(size_==2) {
        if(inp[first]>inp[last]) swap(inp[first],inp[last]);


    }
    else {
        int mid =first+((size_-1)/2);
        if(mid>first)
        mergeSort(inp,first,mid);
        if(last>mid+1)
        mergeSort(inp,mid+1,last);

        merge_r(inp,first,mid,last);
    }
//return inp;

}

int main()
{
    int a[]={3,2,4,5,2,9,8,1};
    int size_=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,size_-1);
    while(size_--) {
        cout<<a[size_];
    }

    cout << "Hello world!" << endl;
    return 0;
}
