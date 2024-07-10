#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t , n , s;
	cin >> t;
	while(t--){
	     cin >> n;
	     int prev = 0;
	     int count = 0;
	    for(int i = 0 ; i<n; i++){
	        cin >> s;
	        if(i == 0){
	            count++;
	            prev = s;
	        }
	        else if(s < prev){
	            count++;
	            prev = s;
	        }
	    }
	    cout << count << endl;
	    
	}

}
