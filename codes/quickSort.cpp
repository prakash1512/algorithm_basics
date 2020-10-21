#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int pindex = start;
    for(int i=start; i<=end-1;i++){
        if(arr[i]<pivot){
            //swap(arr[i],arr[pindex]);
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }

    //swap(arr[end],arr[pindex]);
    int temp2 = arr[end];
    arr[end] = arr[pindex];
    arr[pindex] = temp2;
    return pindex;

    /*for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/
}

void quickSort(int arr[],int start, int end){
    if(end>start){
        int p = partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}



int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Arr before sorting"<<endl;

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<"arr after sorting"<<endl;
    quickSort(arr,0,4);

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}