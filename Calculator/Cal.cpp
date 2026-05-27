#include <iostream>
using namespace std;
class Cal {
public:
	int result = 0;
private:


};

int main()
{
	Cal* cal = new Cal();
	cout << cal->result;
}