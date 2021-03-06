#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i=0; i<=n; i++) {
        a[i]=i;
    }
    for (int i=2; i<=n; i++) {
        if (a[i]!=0) {
            for (int j=i+1; j<=n; j++) {
            if (a[j]%a[i]==0) a[j]=0;
        }
        }
    }
    for (int i=2; i<=n; i++) {
        if (a[i]!=0) cout << a[i] << " ";
    }

    return 0;
}

