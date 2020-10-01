#include<iostream>
using namespace std;

int main()
{
   int i,n,max,min;
   cout<<"Enter the size of array: ";
   cin>>n;
   int arr[n];
   
 	cout<<"Enter the elements of the array : ";
   for(i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   max = arr[0];
   min = arr[0];
   for(i=0;i<n;i++)
   {
     if(arr[i]>max)
     max=arr[i];
	 
     if(arr[i]<min)
     min=arr[i];
	 
	}
cout<<"Max Element in an array is : "<<max<<endl;
cout<<"Minimum Element is : "<<min;
return 0;
}
