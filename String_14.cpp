#include<bits/stdc++.h>
using namespace std;
int main(){
   string s="aabaa";
   string tmp=s;
   reverse(tmp.begin(),tmp.end());
   if(s==tmp) cout<<"palindrome\n";  //Time Complexity- O(n).
   else cout<<"Not palindrome\n";    //Time Complexity- O(n).
   cout<<s<<endl;

return 0;
}
