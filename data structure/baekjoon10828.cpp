#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {

	int n;
	cin >> n;

	stack<int> StackType;

	for (int i = 0; i < n; i++) {

		string str;
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;
			StackType.push(x);
		}
		else if (str == "pop") {
			if (StackType.empty())
				cout << -1 << endl;
			else {
				cout << StackType.top() << endl;
				StackType.pop();
			}
		}
		else if (str == "size") {
			cout << StackType.size() << endl;
		}
		else if (str == "empty") {
			cout << StackType.empty() << endl;

		}
		else if (str == "top") {
			if (StackType.empty())
				cout << -1 << endl;
			else
				cout << StackType.top() << endl;
		}
	}


}