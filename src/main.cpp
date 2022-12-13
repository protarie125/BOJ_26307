#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int h, m;
	cin >> h >> m;

	cout << (h - 9) * 60 + m;

	return 0;
}