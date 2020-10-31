#include<bits/stdc++.h>
using namespace std;

string postfixToInfix(string postfix){
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

            s.push("("+operand2+postfix[i]+operand1+")");
        }
        

    }
    return s.top();
}

int main(){
    string infix,postfix;

    cout<<"Enter a postfix expression:  "<<endl;
    cin>>postfix;

    cout<<"postfix expression: "<<infix<<endl;

    infix = postfixToInfix(postfix);
    cout<<"infix expression: "<<infix<<endl;

    return 0;
}