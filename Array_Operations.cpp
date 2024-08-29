#include <iostream>
using namespace std;
int main()
{
    int n,size,j;
    
    cout<<"Enter the size of the Array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter 1 for Insertion,2 for Searching,3 for Deletion,4 for Sorting,5 for Traversing"<<endl;
    cin>>n;
    switch(n){
        case 1://Insertion
            int x,pos;
            cout<<"Enter the number to insert"<<endl;
            cin>>x;
            
            arr[pos-1]=x;
            for(int i=0;i<size;i++)
                {
                    cout<<arr[i]<<" ";

                }
                cout<<x;
            break;
        case 2://Searching
            int num;
            cout<<"Enter the number to search"<<endl;
            cin>>num;
            for(int i=0;i<size;i++)
            {
                if(arr[i]==num)
                {
                    cout<<"Found at index "<<i<<endl;
                }
            }
            break;
        case 3://Deleting
           int numb,arr2[100];
            cout<<"Enter the number to Delete"<<endl;
            cin>>numb; 
            for(int i=0;i<size;i++)
            {
                if(arr[i]==numb)
                    continue;
                else{
                    cout<<arr[i]<<" ";
                }
            }
            
            break;
        case 4://Sorting
            cout<<"The Sorted Array is"<<endl;
            int temp;
            for(int i=0;i<size-1;i++)
            {
                for(j=0;j<size-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            for(int i=0;i<size;i++)
                {
                    cout<<arr[i]<<" ";

                }
            break;

        case 5:
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            break;

        default:
            cout<<"Wrong Number";
    }
}
