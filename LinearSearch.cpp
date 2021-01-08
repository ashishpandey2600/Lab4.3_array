#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[50],size,key,storekey,pos;
    printf("Enter size of array\n");
    cin>>size;
    printf("Enter the elements of array\n");
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    }
   
     printf("Enter elemnt to be found  :  ");
      cin>>key;
     for(int i=0;i<size;i++)
     {
         if(key==arr[i])
         {
            storekey=arr[i];
            pos=i;
            break;
         }
         else
         {
             cout<<"Sorry no elment found";
             break;
         }
         
     }
    
      cout<<" your array is  : ";
     for(int i=0;i<size;i++)
     {
         cout<<arr[i]<<"   ";
     }
     cout<<"your elment is at position no.="<<pos+1<<endl;
     cout<<"you have searched for "<<storekey;



    return 0;
}