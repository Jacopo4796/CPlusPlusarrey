// Univoca quando ha tutte le lettere diverse

#include <iostream>
#include <string>
using namespace std;

bool univoca(string parola)
{   
    for(int i = 0; i < parola.length(); i++)
    {
        for(int j = i +1; j < parola.length(); j++)
        {
            if(parola[i] == parola[j])
            {               
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string parola;
    cout << "Inserisci la parola. \n";
    cin >> parola; 
   
    if(univoca(parola))
    {
        cout << "La parola " << parola << " non è univoca. \n";
    }
    else
    {
        cout << "La parola " << parola << " è univoca. \n";
    }
}