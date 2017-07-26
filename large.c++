#include<bits/stdc++.h>
using namespace std;
 
// A Utility Function to find the common prefix between
// strings- str1 and str2
string commonPrefixUtil(string str1, string str2)
{
    string res;
    int n1 = str1.length(), n2 = str2.length();
 
    // Compare str1 and str2
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        res.push_back(str1[i]);
    }
 
    return (res;
}
