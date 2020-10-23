//code for radix sort implimentation using count sort algorithm

#include <iostream>
using namespace std;

void countSort(int input_arr[], int size, int div){
    int range = 10;
    int count[10];
    int output_arr[size];
    //input_arr[0] = 100;

    for(int i =  0; i<range; i++){
        count[i] = 0;
    }

    for(int i = 0; i<size; i++){
        count[(input_arr[i]/div)%10]++;
    }

    for(int i = 1; i<range; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i = size-1;i>=0;i--){
        output_arr[--count[(input_arr[i]/div)%10]] = input_arr[i];
    }

    for(int i = 0;i<size;i++){
        input_arr[i] = output_arr[i];
    }
    /*for(int i=0;i<size;i++){
        cout<<output_arr[i]<<" ";
    }*/
}

void radixSort(int input_arr[], int size, int range){
    range = 10;
    //input_arr[0] = 100;
    int max;
    max = input_arr[0];
    for(int i = 1; i<size;i++){
        if(input_arr[i]>max){
            max = input_arr[i];
        }
    }
    int div;
    for(div = 1; max/div>0; div*=10){
        //cout<<"1+"<<endl;
        countSort(input_arr,size,div);
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

    radixSort(arr, size, 10);

    cout<<endl<<endl<<"array after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}