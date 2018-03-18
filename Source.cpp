#include<iostream>
#include<array>
#include<algorithm>

using namespace std;

bool paran(int broj) {
	if (broj % 2 == 0)
	{
		return true;
	}
	return false;
}
int main() {
	array<int, 10> a = { 1, 8, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto it = find_if(a.begin(), a.end(), paran);
	 
	cout << *it << endl;

	 
	 
	return 0;
}
