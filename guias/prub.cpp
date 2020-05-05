#include <iostream>
#include "string.h"
using namespace std;

int main()
{
	string s = "1000";
	cout << std::stoi (s);
	/*try
	{
		int i = std::stoi (s);
		std::cout << i << std::endl;
	}
	catch(std::invalid_argument const &e)
	{
	 std::cout << "Mal ingreso de numero" << std::endl;
	}
*/  
  return 0;
}
