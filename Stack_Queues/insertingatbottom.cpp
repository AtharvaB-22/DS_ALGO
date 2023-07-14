#include <bits/stdc++.h> 
stack<int> reversestack(stack<int>& mystack)
{
    stack<int> newstack;
    while(!mystack.empty())
    {
        int ele=mystack.top();
        newstack.push(ele);
        mystack.pop();
    }
    return newstack;
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    myStack=reversestack(myStack);
    myStack.push(x);
    myStack=reversestack(myStack);
    return myStack;
}
