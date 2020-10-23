#include <bits/stdc++.h>
using namespace std;

void shellSort(int arr[], int size){
    for(int gap = size/2; gap>0; gap/=2){
        for(int j = gap; j<size; j++){
            int temp = arr[j];
            int i = 0;
            for(i = j; (i>=gap)&&(arr[i-gap]>temp); i-=gap){
                arr[i] = arr[i-gap];
            }
            arr[i] = temp;
        }
    }
}

int main(){
    int size;
    cout<<"input the size of array you want to sort"<<endl;
    cin>>size;
    int arr[size];

    cout<<endl<<endl<<"enter "<<size<<" elements for the array to sort"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<endl<<"array before sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    shellSort(arr, size);

    cout<<endl<<endl<<"array after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}