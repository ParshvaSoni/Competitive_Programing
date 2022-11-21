#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
unordered_map<char,string> mp={
  {'2',"abc"},
  {'3',"def"},
  {'4',"ghi"},
  {'5',"jkl"},
  {'6',"mno"},
  {'7',"pqrs"},
  {'8',"tuv"},
  {'9',"wxyz"}
};

void solve(string no,string str,int i,int idx)
{
  cout<<i<<"\t"<<idx<<"\t"<<str<<"\n";
  if(str.size()==no.size())
  {
    cout<<"=>"<<str<<"\n";
    ans.push_back(str);
    return;
  }
  if(i<no.size())
  {
    solve(no,str+mp[no[i]][idx],i+1,idx);
  }
  if(idx<mp[no[i]].size()-1)
  {
    solve(no,str+mp[no[i]][idx+1],i,idx+1);
  }
  
}

int main()
{
  string str;
  cin>>str;
  solve(str,"",0,0);
  return 0;
}