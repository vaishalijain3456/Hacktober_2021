#include<iostream>
using namespace std;

template<class T>
void selectionSort(T arr[],int n)
{
    
    int i,j,pos,temp,small;
    int comp=0,swaps=0;
    
    for(int i=0;i<n;i++)
    {
        small=arr[i];
        pos=i;
       ;
        
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<small)
            {
                
                small=arr[j];
                pos=j;
                
            }
        }
        temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
        
       

    }
   

}

int main()
{
    cout<<"\n\t ---- SELECTION SORT CODE ----"<<endl;
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
    selectionSort(arr,size);

    cout<<"------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"\n\t"<<arr[i]<<" "<<endl;
    }

    //secondly for character
    cout<<"\n\t NOW ENTER ELEMENTS FOR CHARACTER"<<endl;

    char *brr=new char[size];

     for(int i=0;i<size;i++)
    {
        cout<<"\n\tENTER ELEMENT "<<i+1<<" - ";
        cin>>brr[i];
    }
    selectionSort(brr,size);

    cout<<"\n\t------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"\n\t"<<brr[i]<<" "<<endl;
    }
   
   //also  for float 
   cout<<"\n\t NOW ENTER ELEMENTS FOR FLOAT "<<endl;
   float *crr=new float[size];

     for(int i=0;i<size;i++)
    {
        cout<<"\n\tENTER ELEMENT "<<i+1<<" - ";
        cin>>crr[i];
    }
    selectionSort(crr,size);

    cout<<"\n\t------------SORTED ARRAY-------------"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"\n\t"<<crr[i]<<" "<<endl;
    }
   

    return 0;

    
}   