
#include <iostream>
using namespace std;
class Cal {
public:
	int getSum(int a, int b)
	{
		return a + b;
	}

	int getMul(int a, int b) { return a * b; }
	int getSub(int a, int b) { return a - b; }
	int getDiv(int a, int b) { return a / b; }
private:
	int result = 0;
};


int main()
{
	Cal* cal = new Cal();
	cout << cal->getSum(1, 2);
}