
  
#include <iostream>
using namespace std;

void swap( int *A,int i, int j){
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}


void selection_sort(int A[], int n){
	
	
	int minimum;
	
	for(int i=0; i<n-1;i++){
		minimum =i;
		
		for(int j = i+1; j<n; j++){
			if(A[j] < A[minimum]){
				minimum = j;
			}
		}
		
	swap(A[minimum], A[i]);
	}
}

int main()  
{  
	int n,i ;
    cout<<"Enter the size of the array"<<endl;
	cin>>n; 
	int A[n];
   
    for(i = 0;i<n;i++){
    	cout<<"Enter the element "<<(i+1)<<endl;
    	cin>>A[i];
	}
    selection_sort(A, n);  
    cout << "Sorted array: \n"; 
	 for( i = 0; i < n; ++i)    
     
    cout << A[i] << " ";
    return 0;
}

