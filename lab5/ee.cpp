#include <iostream>
using namespace std;

int main(){
    string n;
    int even=0;
    int odd=0;
    cin>>n;
    for (int i=0;i<n.size();i++){
        if (i %2==1){
          odd=odd+ int(n[i] - 48);
        }
        else if (i % 2==0){
          even= even + int(n[i] - 48);
        }
      
            
        }
    
     if (even==odd){
        cout<<"YES";
     }
     else {
            cout<<"NO";
            }

return 0;
}
