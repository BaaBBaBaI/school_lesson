#include <iostream>
int showU(int n) {
	static int prikol = 0;
	prikol++;
	std::cout << prikol << " ";
	if (prikol >= n) {
		return prikol;
	}
	showU(n);
	prikol = 0;
	return 0;
}
int main() {
	int n;
	showU(5);
	showU(4);
	return 0;
}
