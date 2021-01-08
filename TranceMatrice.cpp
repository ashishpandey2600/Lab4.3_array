#include<iostream>
using namespace std;
int main()
{
    int a[50][50],m,n,sum=0;
    cout<<"enter the dimensions of matrix m*n\n";
    cin>>m>>n;
    if(m==n){
        cout<<"enter the elements of matrix\n";
    for(int i=0;i<m;i++)//input of matrix
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        
        }
    }
    for(int i=0;i<m;i++)//output of matrix entered by user
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)//sum of principle diagonals matrix  
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            sum+=a[i][j];
        }

    }
    cout<<"Trace of matrix is = "<<sum;



    }
    else
    {
        cout<<"Enter the square matrix : rows==columns";
    }
    
    return 0;
}