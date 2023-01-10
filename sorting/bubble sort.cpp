#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main()
{
    int arr[5]={5,9,3,2,1};
    cout<<"before :     ";
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    SelectionSort(arr,5);

    cout<<endl<<"after  :     ";
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}