#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std; 
/* Завдання 1. Створити бібліотеку таких функцій:
■ int mystrlen(const char * str); — функція визначає довжину рядка.
■ char * mystrcpy (char * str1, const char * str2); — функція
копіює рядок str2 у буфер, що адресується через str1.
Функція повертає покажчик на перший рядок str1.
■ char * mystrcat (char * str1, const char * str2); — функція
приєднує рядок str2 до рядка str1. Функція повертає
покажчик на перший рядок str1.
■ char * mystrchr (char * str, char s); — функція здійснює
пошук символа s у рядку str. Функція повертає покажчик на перше входження символу в рядок, в іншому
випадку — 0.
■ char * mystrstr (char * str1, char * str2); — функція
здійснює пошук підрядка str2 у рядку str1. Функція
повертає покажчик на перше входження підрядка str2
в рядок str1, в іншому випадку — 0.
*/
  
    int main()
    {
       setlocale(0, " ");

       char str1[1000];
       char str2[800];
      
       
       cout << "Enter str1 ->"; 
       cin >> str1;
       cout << endl;  
   
       cout << "Enter str2 ->";
       cin >> str2;
       cout << endl;

       cout << ">-------------------<" << endl;
       cout << "The length1 is " << strlen(str1) << endl;
       cout << endl;
       cout << "The length2 is " << strlen(str2) << endl;
       cout << ">-------------------<" << endl;
       system("pause"); 
       cout << ">-------------------<" << endl;
       strcpy(str1,str2);
       cout << str1 << endl;
       cout << ">-------------------<" << endl;
       system("pause");

       cout << ">-------------------<" << endl;
       strcat(str1, str2);
       cout << str1 << endl;
       cout << ">-------------------<" << endl;
       system("pause");

       cout << ">-------------------<" << endl;
       cout << strchr(str1, 's') << endl;
       cout << ">-------------------<" << endl;
       system("pause");

       cout << ">-------------------<" << endl;
       cout << strstr(str1, "enter") << endl;
       cout << ">-------------------<" << endl;
       return 0;
    }
