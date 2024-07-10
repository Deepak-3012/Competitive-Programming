#include <bits/stdc++.h>
using namespace std;
int findFact(int n){
	//base case
	if(n == 0) return 1;
	// belief
	int nm1 = findFact(n-1);
	//expectaion
	int res = n * nm1;
	return res;

}
int main(){
	int n;
	cin >> n;
	int res = findFact(n);
	cout << res;
}
