//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution{   
public:
    string compareNum(int A,int B){
        // code here 
        //In C++, to_string() is a standard library function from <string> 
        //that converts numeric values (like int, float, double) into a 
        //string representation
       return (A < B) ?  to_string(A) +" is less than "+ to_string(B) :
              (A > B) ? to_string(A) +" is greater than "+ to_string(B):
                        to_string(A) + " is equals to "+ to_string(B);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends