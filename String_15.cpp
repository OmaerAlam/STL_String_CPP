#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    //1 No Process-
   string s;
   getline(cin,s);  //print with space
   cout<<s<<endl;

   cout<<endl;

   //2 No process-
   int t;
   cin>>t;
   for(int i=1;i<=t;i++){
    string s1;
    getline(cin,s1);
    cout<<"case "<<i<<" "<<s<<endl;
   }

   cout<<endl;

   //3 No process-
   int n;
   cin>>n;
   for(int j=1;j<=n;j++){
    string s2;
    char c;
    cin>>c;
    getline(cin,s2);
    s2=c+s2;
    cout<<"case "<<j<<" "<<s2<<endl;
   }

return 0;
}
