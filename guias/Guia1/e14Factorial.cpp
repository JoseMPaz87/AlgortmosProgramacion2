#include <iostream>
using namespace std;

size_t factorial (size_t);

int main (void)
{
	size_t n;
	cout << "Ingrese un número: ";
	cin >> n;
	cout << "Su factorial es " << factorial (n) << endl;
	return 0;
}

size_t factorial (size_t n)
{
	if (n == 0 || n == 1)
		return 1;
	return n * factorial (n-1);
}
