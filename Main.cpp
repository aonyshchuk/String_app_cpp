#include <iostream>
using namespace std; 

int main()
{
   //�������� 4. ��� ����� �������. ��������� ���������, �� � ��� ����� ����������.

	char s[50];
	cout << "Enter the word-> ";
	cin >> s;
	int i; 
	int len = strlen(s);

	for (int i = 0; i < len/2; ++i)
	{
		if (s[i] != s[len - i - 1])
		{
			cout << "Word isn`t polindrom" << endl;
		}
	}
	cout << "Word is polindrom" << endl;


	return 0;
} 