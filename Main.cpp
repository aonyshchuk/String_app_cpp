#include <iostream>
using namespace std; 
//Завдання 2. Дан рядок символів. Визначити кількість літер, цифр та інших символів, присутніх у рядку. 
int main()
{
    setlocale(0, " "); 
    
    char str1[] = "Визначити кількість літер, цифр та інших символів, присутніх у рядку."; 
   

    int len_str1 = strlen(str1); 
   
    cout << "str1 = " << len_str1 << endl; 
  
    return 0;
}