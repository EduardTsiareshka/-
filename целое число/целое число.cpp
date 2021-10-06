using namespace std;
#include <iostream>

int main()
{
    int n,tot=0;
    do
    {
        cout << "enter any integer (to stop enter 0) \n";
        cin >> n;
        tot = tot + n;
        cout << n << ",";
    } 
    while (n != 0);
    cout << tot << endl;
    return 0;
}
