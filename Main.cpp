#include <iostream>
using namespace std; 

int main()
{
    char s[59] = "You should calculate the amount of words in this sentence.";

    int i;
    int k; 
    bool f; 

    k = 0; 
    f = true;
  
    for (i = 0; i < strlen(s); i++)
        if ((s[i] == ' ') || (s[i] == ',') || (s[i] == '.'))
        {
            f = true; 
        }
        else
        {
            if (f)
            {
                k++;
                f = false;
            }
        }


	return 0;
}