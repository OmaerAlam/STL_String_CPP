#include<bits/stdc++.h>
using namespace std;
int main(){
    //1 No process-
   string s="aabaa";
   string tmp=s;
   reverse(tmp.begin(),tmp.end());
   if(s==tmp) cout<<"palindrome\n";  //Time Complexity- O(n).
   else cout<<"Not palindrome\n";    //Time Complexity- O(n).
   cout<<s<<endl;

   cout<<endl;

//2 No process-
   string s1="aabAa";
   string tmp1=s1;
   reverse(tmp1.begin(),tmp1.end());
   if(s1==tmp1) cout<<"palindrome\n";  //Time Complexity- O(n).
   else cout<<"Not palindrome\n";    //Time Complexity- O(n).
   cout<<s1<<endl;

return 0;
}
