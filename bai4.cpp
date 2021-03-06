#include <iostream>
using namespace std;

bool timkiem(int a[], int left, int right, int x)
{
    if (left>right) return false;
    int mid=(left+right)/2;
    if (a[mid]==x) return true;
    else if (x>a[mid]) return timkiem(a,mid+1,right,x);
    else return timkiem(a,left,mid-1,x);
}

int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (timkiem(a,0,n-1,x)) cout << "YES" ;
    else cout << "NO";

    return 0;
}

