#include<iostream>
using namespace std;

void sayDigits(int n){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n==0)
    {
        return;
    }
    
    int digit = n%10;
    n=n/10;

    sayDigits(n);

    cout<<arr[digit]<<" ";

}

int main(){
    int n;
    cin>>n;
    sayDigits(n);
} 