#include <iostream>
using namespace std; 

int main()
{
   //Завдання 4. Дан рядок символів. Необхідно перевірити, чи є цей рядок паліндромом.

	char s[];
	cout << "Enter the word-> ";
	cin >> s;

	int len = strlen(s);

	for (int i = 0; i < len/2; ++i)
	{
		if (s[i] != s[len - i - 1])
		{
			return false;
		}
	}
	return true;

	return 0;
}