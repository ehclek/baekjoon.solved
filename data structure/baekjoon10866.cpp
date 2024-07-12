#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	deque<int> mydeque;
	
	for (int i = 0; i < n; i++) {

		string str;
		cin >> str;

		if (str == "push_front") {
			int x;
			cin >> x;
			mydeque.push_front(x);
		}
		else if (str == "push_back") {
			int x;
			cin >> x;
			mydeque.push_back(x);
		}
		else if (str == "pop_front") {
			if (mydeque.empty())
				cout << -1 << "\n";
			else {
				cout << mydeque.front() << "\n";
				mydeque.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (mydeque.empty())
				cout << -1 << "\n";
			else {
				cout << mydeque.back() << "\n";
				mydeque.pop_back();
			}
		}
		else if (str == "size") {
			cout << mydeque.size() << "\n";
		}
		else if (str == "empty") {
			cout << mydeque.empty() << "\n";

		}
		else if (str == "front") {
			if (mydeque.empty())
				cout << -1 << "\n";
			else
				cout << mydeque.front() << "\n";
		}
		else if (str == "back") {
			if (mydeque.empty())
				cout << -1 << "\n";
			else
				cout << mydeque.back() << "\n";
		}
	}


}