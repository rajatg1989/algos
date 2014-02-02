#include<iostream>

using namespace std;

void knap(int val[], int wt[], int W, int n, bool itm[])
{

        int aux[4][51];
        int keep[4][51];

        for(int i=0; i<51; i++)
                aux[0][i]=0;

        for(int i=0; i<4; i++)
                aux[i][0]=0;

        for(int i=0; i<4; i++)
        {
                for(int j=0; j<51; j++)
                {
                        if(wt[i]<=W)
                        {
                                aux[i][j]=max(aux[i-1][j], aux[i-1][j-wt[i]] + val[i]);
                                keep[i][j]=1;
                                //cout<<i<<j<<endl;
                        }
                        else
                        {
                                aux[i][j]=aux[i-1][j];
                                keep[i][j]=0;
                        }
                }
        }
        cout<<aux[2][50];

        for(int i=50; i>=0;)
        {
                for(int j=2; j>=0;)
                {
                    //cout<<i<<" "<<j<<endl;
                        if(keep[j][i]==1)
                        {
                                j--;
                                i-wt[j];
                                itm[j-1]=1;
                                //cout<<j-1<<endl;
                        }
                        else
                        {
                                j--;
                                itm[j-1]=0;
                        }
                }
        }

}

int main()
{
    cout<<min(2,3)<<endl;
        int val[] = {60, 100, 120};
        int wt[] = {10, 20, 30};
        int  W = 50;

        bool itm[3];

        knap(val, wt, W, 3, itm);

        for(int i=0; i<3; i++)
                //cout<<itm[i]<<" ";


    cin.ignore();
    cin.get();
    return 0;
}
