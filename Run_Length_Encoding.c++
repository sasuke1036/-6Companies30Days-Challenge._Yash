//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  string s;
  int n =src.length();
  int c=0;
  for(int i=0;i<n;i++){
      if(src[i]==src[i+1]){
          c++;
      }
      else{
          s += src[i];
        s += to_string(c+1);
          c=0;
      }
  }
  return s;
}     
 
