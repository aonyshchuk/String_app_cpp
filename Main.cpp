#include <iostream>
using namespace std; 

int main()
{
   //Завдання 4. Дан рядок символів. Необхідно перевірити, чи є цей рядок паліндромом.

	string str;
	cout << "Enter the word-> ";
	cin >> str;

	int len = strlen(str);

	for (int i = 0; i < len/2; ++i)
	{
		if (str[i] != str[len - i - 1])
		{
			return false;
		}
	}
	return true;

	return 0;
}