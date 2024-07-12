#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {

	int n;
	cin >> n;

	queue<int> QueueType;

	for (int i = 0; i < n; i++) {

		string str;
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;
			QueueType.push(x);
		}
		else if (str == "pop") {
			if (QueueType.empty())
				cout << -1 << endl;
			else {
				cout << QueueType.front() << endl;
				QueueType.pop();
			}
		}
		else if (str == "size") {
			cout << QueueType.size() << endl;
		}
		else if (str == "empty") {
			cout << QueueType.empty() << endl;

		}
		else if (str == "front") {
			if (QueueType.empty())
				cout << -1 << endl;
			else
				cout << QueueType.front() << endl;
		}
		else if (str == "back") {
			if (QueueType.empty())
				cout << -1 << endl;
			else
				cout << QueueType.back() << endl;
		}
	}


}