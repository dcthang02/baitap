#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    int y[n];
    for (int i=0; i<n; i++) cin >> x[i] >> y[i];
    int z=0;
    bool kiemtra=false;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (x[i]==x[j]||y[i]==y[j]||(abs(x[i]-y[i])==abs(x[j]-y[j])&&(x[i]-y[i])*(x[j]-y[j])>=0)) {
                kiemtra=true;
                break;
            }
        }
    }
    if (kiemtra) cout << "yes" ;
    else cout << "no";

    return 0;
}

