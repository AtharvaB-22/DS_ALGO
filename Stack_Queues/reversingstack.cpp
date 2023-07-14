void InsertatBottom(stack<int> &stack,int ele)
{
  if (stack.empty()) {
    stack.push(ele);
    return;
  }
  int num=stack.top();
  stack.pop();

  InsertatBottom(stack,ele);
  stack.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())
    return;

    int num=stack.top();
    stack.pop();
    reverseStack(stack);

    InsertatBottom(stack,num);
    
}