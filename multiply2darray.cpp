#include<iostream>
using namespace std;
int main()
{
    int a[50][50],b[50][50],c[50][50],m,n,q,p,sum;
    cout<<"Enter the dimensions of matrix m*n\n";
    cin>>m>>n;
    cout<<"Enter the dimensions of matrix p*q, n should be equal to p\n";
    cin>>p>>q;
    if(n==p)
    {
        cout<<"Enter the element of matrix m*n\n";
        for(int i=0;i<m;i++)//input of fist :a array
        {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        }
        cout<<"Enter the element of matrix p*q\n";
        for(int i=0;i<p;i++)//input of second :  b array
        {
            for(int j=0;j<q;j++)
            {
                cin>>b[i][j];
            }
        }
        for(int i=0;i<m;i++)//multiplying  and storing in c matrix
        {
              
            for(int j=0;j<q;j++)
            { 
                sum=0;
                for(int k=0;k<q;k++){
                sum+=a[i][k]*b[k][j];}
                c[i][j]=sum;
            }
            
            
        }
     for(int i=0;i<m;i++)//print the c matrix which is resultant of a [][]*b[][]
     {
        for(int j=0;j<q;j++)
        {
            cout<<c[i][j]<<"  ";
            
        }
        cout<<endl;
     }
    }

     else
     {
         cout<<"matrix cannot be multiplyed";
     }

    return 0;
}