#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    
    int t;
    cin >> t;
    while (t--) {
        vector <int> arr; // similar to arraylist
        int n;
        cin >> n;
        int val;
        for (int i = 0; i < n; i++) {
            
            cin >> val;
            arr.push_back(val);
        }
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                cnt++;
            }
            else {
                arr[i] = arr[i - 1]; // cuz arr[i-1] is smaller than arr[i]
            }
            
        }
        cout << cnt << endl;
    }

}