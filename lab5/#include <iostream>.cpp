#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    int start, end;
    cin >> word >> start >> end;
    for(int i = start; i <= end; i++){
        cout << word[i];
    }
}