#include <iostream>
using namespace std; 

int main()
{
    string str = "Hello World";
    int index = 5;
    char replacement = '/t';

    str[index] = replacement;

    cout << str << endl;

	return 0;
}