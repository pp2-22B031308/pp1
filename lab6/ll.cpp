#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main()
{
    int k = 0;
      cin >> s >> n;
      for(int i = 0; i < s.size(); i++)
      {
        if(s[i] >= '0' && s[i] <= '9')
            k++;
        else    
            k = 0;
        if(k == n)
        {
            cout << "Valid";
            return 0;
        }
      }
     cout << "Not valid";
     return 0;
}