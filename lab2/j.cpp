#include<iostream>
using namespace std;

int n, i;
int count_digit(int num)
{
static int count=0;
    if(num>0)
    {
        if(num%10==0)
        count++;
        count_digit(num/10);
    }
    return count;
}
int main ()
{
    int n;
    cin>>n;
    cout << count_digit(n);
}