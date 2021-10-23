// C++ program for implementation of Heap Sort
#include<iostream>
#include<conio.h>
using namespace std;


 // } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

    //Heapify function to maintain heap property.
class sort{
	public:
    void heapify(int arr[], int n, int i)  
    {
        int l=(2*i)+1;
        int r=(2*i)+2;
        int largest=i;
        if(l<n && arr[l]>arr[largest])
            largest=l;
        if(r<n && arr[r]>arr[largest])
            largest=r;
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=(n/2)-1;i>=0;i--)
        {
            heapify(arr,n,i);
        }
   
    }

    
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
         for(int j=n-1;j>=0;j--)
        {
            swap(arr[0],arr[j]);
            heapify(arr,j,0);
        }
    }





/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i];
    printf("\n");
}
};
// Driver program to test above functions
int main()
{
	cout<<"helli";
    int arr[1000000],n,i;
    cout<<"Enter size of Array : ";
    cin>>n;
    cout<<"Enter array : ";
    for(i=0;i<n;i++)
      cin>>arr[i];
    sort ob;
    ob.heapSort(arr, n);
    ob.printArray(arr, n);
    getch();
    return 0;
}

