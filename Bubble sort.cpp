#include <iostream>
using namespace std;

int main()
{
   
	int n,i ,j;
    cout<<"Enter the size of the array"<<endl;
	cin>>n; 
	int arr[n];
   
    for(i = 0;i<n;i++){
    	cout<<"Enter the element "<<(i+1)<<endl;
    	cin>>arr[i];
	}
   
   for(i = 0; i < n - 1; ++i)
   { 
      int swapped = 0;

      for(j = 0; j < (n - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
        
	cout << "\nArray after sorting: ";
   for(i = 0; i < n; ++i)
     cout <<  arr[i] << " ";
 
   return 0;
} 
