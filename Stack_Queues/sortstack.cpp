#include <bits/stdc++.h> 
void sortedInsert(stack<int>&stack,int ele)
{
  if (!stack.empty()) {
    int num = stack.top();
	if(num<ele)
	stack.push(ele);
	else
	{
		stack.pop();
		sortedInsert(stack,ele);
		stack.push(num);
	}
  }
  else
  stack.push(ele);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty())
	return;

	int num=stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack,num);
}