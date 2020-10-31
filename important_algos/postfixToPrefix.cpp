#include<bits/stdc++.h>
using namespace std;

string postfixToprefix(string postfix){
    stack<string> s;

    for(int i=0;i<postfix.length();i++){
        if((postfix[i]>='a'&&postfix[i]<='z')||(postfix[i]>='A'&&postfix[i]>='Z')){
            string operand(1,postfix[i]);
            s.push(operand);
        }

        else
        {
            string operand1=s.top();
            s.pop();
            string operand2=s.top();
            s.pop();

            s.push(postfix[i]+operand2+operand1);
        }
        

    }
    return s.top();
}

int main(){
    string prefix,postfix;

    cout<<"Enter a postfix expression:  "<<endl;
    cin>>postfix;

    cout<<"postfix expression: "<<prefix<<endl;

    prefix = postfixToprefix(postfix);
    cout<<"prefix expression: "<<prefix<<endl;

    return 0;
}