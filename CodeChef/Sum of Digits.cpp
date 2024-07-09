#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int num;
		cin >> num;
		int sum = 0;
		while(num){
			int last_dig = num % 10;
			sum += last_dig;
			num = num /10;
		}
		cout << sum << endl;
	}
}