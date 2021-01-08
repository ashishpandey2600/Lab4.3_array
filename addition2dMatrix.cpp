#include<iostream>
using namespace std;
int main()
{

    int a[50][50],b[50][50],p,q,m,n,c[50][50];
    cout<<"enter the m*n : rows*columns\n";
    cin>>m>>n;
    cout<<"enter the p*q :  rows*columns\n";
    cin>>p>>q;
    if(m==p)
    {
        cout<<"Enter the elements of matries m*n column wise\n";
        for(int i=0;i<m;i++)//input of first matrix
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter the element of p*q matrix\n";
        for(int i=0;i<p;i++)//intput of second matrix
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++)//for adding matix
        {
            for (int j=0;j<n;j++)
            {
               c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            cout<<c[i][j]<<" ";
            cout<<endl;
            
        }
        
    }
    else
    {
        cout<<"Try again ,Matrix can not be added";
    }
    




    return 0;
}