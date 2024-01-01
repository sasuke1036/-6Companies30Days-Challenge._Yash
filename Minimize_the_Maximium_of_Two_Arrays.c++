class Solution {
public:
    long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
long long lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
    int minimizeSet(int d1, int d2, int c1, int c2) {
     long long x=lcm(d1,d2);
    long long l=1,r=INT_MAX;
    long long m;
    long long ans=INT_MAX;
    while(l<=r)
    {
        m=(l+r)/2;
        int n1=m-m/d1;
        int n2=m-m/d2;
        int n12=m-m/x;
        if(n1>=c1 && n2>=c2 && n12>=(c1+c2))
        {
         ans=m;
         r=m-1;
        }
        else l=m+1;
    }
 return ans;
    }
};
