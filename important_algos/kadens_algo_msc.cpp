#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int> vect){

    int max = vect[0];
    for (int i = 0; i < vect.size(); i++)
    {
        if(vect[i]>max) max = vect[i];
    }

    if(max<0) return max;

    int sum = 0;
    int ans = vect[0];

    for(int i=0;i<vect.size();i++){
        if(sum+vect[i]>=0){
            sum+=vect[i];
            if(sum>ans) ans = sum;
        }

        else
        {
            sum = 0;
        }
        
    }

    return ans;
    
}

int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    vector<int> V;

    cout<<"enter "<<size<<" number of integers for array"<<endl;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }

    int sum = maxsum(V);

    cout<<"maximum sum is: "<<sum<<endl;
    

    return 0;
}