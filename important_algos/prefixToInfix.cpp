#include<bits/stdc++.h>
using namespace std;

string prefixToInfix(string prefix){
    stack<string> s;

    for(int i=prefix.length()-1;i>=0;i--){
        if((prefix[i]>='a'&&prefix[i]<='z')||(prefix[i]>='A'&&prefix[i]>='Z')){
            string operand(1,prefix[i]);
            s.push(operand);
        }

        else
        {
            string operand1=s.top();
            s.pop();
            string operand2=s.top();
            s.pop();

            s.push("("+operand1+prefix[i]+operand2+")");
        }
        

    }
    return s.top();
}

int main(){
    string infix,prefix;

    cout<<"Enter a prefix expression:  "<<endl;
    cin>>prefix;

    cout<<"prefix expression: "<<infix<<endl;

    infix = prefixToInfix(prefix);
    cout<<"infix expression: "<<infix<<endl;

    return 0;
}