#include <iostream>
using namespace std;
int main()
{
    int a, n, m;
    cin>>a>>n>>m;
    int du = 1;
    for(int i = 0; i < n; i++)
    {
        du = du%m * a%m;
    }
    cout<<du;
    return 0;
}
