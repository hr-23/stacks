// om namahshivaya 
// om namo venkatesaya 
// om shri matre namaha 
// 4 april 2022
// this question is about balencing the paranthesis using stl implementation of stack 
// try to recall this code without looking into the  code ,have a clear cut idea what you are doing 
#include<bits/stdc++.h>
using namespace std;
// checking whether the opening and closing are balanced or not 
bool is_valid(char o,char c)
{
  if(o=='(' && c==')')return true;
  if(o=='[' && c==']')return true;
  if(o=='{' && c=='}')return true;
  return false;
}
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     #endif
    string s;getline(cin,s);
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
        else if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(is_valid(st.top(),s[i]))
                st.pop();
        }
    }
    if(st.empty())cout<<"VALID\n";
    else cout<<"NOT VALID\n";
}
