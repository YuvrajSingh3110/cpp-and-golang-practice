#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > 0; j--)
        {
        if (i + j == n)
        {
            cnt++;
        }
        }
    }
    cout<<cnt;
    
	return 0;
}
