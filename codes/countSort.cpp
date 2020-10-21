#include <iostream>
using namespace std;

void countSort(int arr[], int range, int size){
    range = 10;
    int count_arr[range];
    int output_arr[size];
    for(int i = 0; i<range; i++){
        count_arr[i] = 0;
    }

    for(int i = 0; i<size; i++){
        ++count_arr[arr[i]];
    }

    for(int i = 1; i<range -1; i++){
        count_arr[i] = count_arr[i] + count_arr[i-1];
    }

    for(int i = 0; i<size; i++){
        output_arr[--count_arr[arr[i]]] = arr[i];
    }

    for(int i = 0; i<size; i++){
        arr[i] = output_arr[i];
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

    countSort(arr,0,5);

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}