#include <bits/stdc++.h> 
void newstack(stack<int>&inputStack,int count,int size)
{
   //base case 
   if(count==size/2)
   {
      inputStack.pop();
      return;
   }

   int num=inputStack.top();
   inputStack.pop();

   // recursive call
   newstack(inputStack,count+1,size);

   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   newstack(inputStack,0,N);
   
}