#include <iostream>
using namespace std; 

int main()
{
    char s[] = "You should calculate the amount of words in this sentence.";

    int i;
    int k; 
    bool t; 

    k = 0; 
    t = true;
  
    for (i = 0; i < strlen(s); i++)
        if ((s[i] == ' ') || (s[i] == ',') || (s[i] == '.'))
        {
            t = true; 
        }
        else
        {
                t = false;
            
        }


	return 0;
}