bool isValidParenthesis(string s)
{
    // Write your code here.
    int  l=s.length();
    if(l%2==1)
    return false;

    stack<char> st;
    int ascTop=0;
    int asc=0;
    char ch;
    int i;
    for(i=0;i<l;i++) // comparinggfrom the second element
    {
        ch=s[i];
        if(ch=='['||ch=='{'||ch=='(')
        st.push(ch);
        else
        {
            if(!st.empty())
            st.pop();
            else
            return false;
        }
    }
    if(st.empty())
    return true;
    
    return false;
}