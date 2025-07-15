/*
#include<iostream>
using namespace std;
int fact (int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}
int combo(int i, int j) {
	return fact(i) / (fact(j) * fact(i-j));
}
int main() {
	int n;
	cin>>n;

	if (n < 0 || n > 100) return 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				cout <<1<<"\t";
			} else {
				int val = combo(i,j);
				cout<<val<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
} */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 100) return 0;

    for (int i = 0; i < n; i++) {
        long long val = 1;
        for (int j = 0; j <= i; j++) {
            cout << val << "\t";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}