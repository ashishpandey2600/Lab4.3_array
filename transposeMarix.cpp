#include<iostream>
using namespace std;
int main()
{
    int a[50][50],b[50][50],m,n;
    cout<<"Enter values of row * columns: m*n : ";
    cin>>m>>n;
        cout<<"Enter the element of matrix m*n,column wise : \n";
        for(int i=0;i<m;i++)//input of 2d matrix
        {
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
    
  cout<<"you have entered this matrix:\n ";
  for(int i=0;i<m;i++)//output of 2d matrix
  {
      for(int j=0;j<n;j++)
      {
          cout<<a[i][j];
          cout<<"   ";
          
      }
      cout<<endl;
  }
  for(int i=0;i<n;i++) //loop for b[i] = a[j] and b[j] =a[i] for transpose
  {
      for(int j=0;j<m;j++)
      b[i][j]=a[j][i]; //process for transpose
  }
  cout<<"After transpose :"<<endl;
  for(int i=0;i<n;i++)
  {
      for (int j=0;j<m;j++)// printing after transpose , b[rows]=a[columns] and b[columns]=a[rows]
      {
      cout<<b[i][j];
      cout<<"   ";
      }
      cout<<endl;
      
  }



    return 0;
}