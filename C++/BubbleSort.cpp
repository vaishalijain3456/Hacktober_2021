#include<iostream>
using namespace std;
//here i did bubble sort using template so that
//i can input number in any data type in which i want 

template<class T>
//function for bubble sort
void bubbleSort(T arr[],int n)
{
    int temp;
    int comp=0,swaps=0;
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n\t  ITERATION :  "<<i+1<<" ";
        for(int j=0;j<n-i-1;j++)
        {
            comp++;
            if(arr[j]>arr[j+1]){
                swaps++;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
            for(int k=0;k<n;k++)
            {
                cout<<arr[k]<<" "; 
            }
        }

    }
    cout<<"\n\t NUMBER OF SWAPES: "<<swaps<<endl;
    cout<<"\n\t NUMBER OF COMPARISON: "<<comp<<endl;

}

int main()
{
    cout<<"\n\t ----FOR BUBBLE SORT----"<<endl;
    int size;

    //firstly for integer
    int *arr=new int[size];
   
    cout<<"\n\tENTER THE SIZE OF ARRAY: ";
    cin>>size;

     for(int i=0;i<size;i++)
    {
        cout<<"\n\t ENTER ELEMENT "<<i+1<<" - ";
        cin>>arr[i];
    }
    bubbleSort(arr,size);

    cout<<"------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    //secondly for character

     char *brr=new char[size];

     for(int i=0;i<size;i++)
    {
        cout<<"\n\tENTER ELEMENT "<<i+1<<" - ";
        cin>>brr[i];
    }
    bubbleSort(brr,size);

    cout<<"\n\t------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<brr[i]<<" ";
    }
   
   //third for float 
   float *crr=new float[size];

     for(int i=0;i<size;i++)
    {
        cout<<"\n\tENTER ELEMENT "<<i+1<<" - ";
        cin>>crr[i];
    }
    bubbleSort(crr,size);

    cout<<"\n\t------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<crr[i]<<" ";
    }
   

    return 0;

    
}   