#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
     {
        
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        
        for (int s = 1; s <= (n - i) * 2; s++)
         {
            cout << " ";
        }

        
        for (int j = i; j >= 1; j--) 
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
