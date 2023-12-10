#include <iostream>
using namespace st      

void up_string (string str){
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++ ){
        if (str[i] >= 'a' && str[i]<= 'z')
        k = k+1;m             
    }
    cout << k << " ";
}

void down_string (string str) {
    int m= 0;

    for (int i = 0; str[i] != '\0'; i ++){
        if (str[i] >= 'A' && str[i] <= 'Z')
        m = m+ 1;

    }
    cout << m;
}


int main(){
    
    string str;
   getline(cin,str);
  
    up_string(str);
    down_string(str);

    return 0;
}