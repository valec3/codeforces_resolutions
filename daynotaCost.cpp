// A. How Much Does Daytona Cost?

#include <iostream>
using namespace std;

int main() {
    int t{},n{},k{};
    int a[1000]{};
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        // verify subsegments
        int count{};
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                count++;
            }
            
        }
        cout<< (count == 0 ? "NO" : "YES")<<endl;
        
    }

    return 0;
}