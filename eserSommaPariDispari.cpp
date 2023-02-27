/* Scrivi un programma che, dato un array di interi, calcoli
la somma degli elemnti pari e degli elementi dispari in due cicli
separati. Il programma deve poi stampare a schermo le somme 
ottenute. 
es. input [3, 5, 2, 8, 9, 4]
    output: somma degli elemnti pari: 14
            somma degli elemnti dispari: 17*/

#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    int somPari = 0;
    int somDispari = 0;
    int arrayNumeri[6] = {3, 5, 2, 8, 9, 4};

    for(int i = 0; i < 6; i++) 
    {
        if(arrayNumeri[i] % 2 == 0)
        {
            somPari += arrayNumeri[i]; // Mi somma i numeri pari
        }
    }
    for(int i = 0; i < 6; i++) 
    {
        if(arrayNumeri[i] % 2 != 0)
        {
            somDispari += arrayNumeri[i]; // Mi somma i numeri dispari   
        }
    }
    cout << "La somma dei numeri pari è: " << somPari << ". \n";
    cout << "La somma dei numeri dispari è: " << somDispari << ". \n";      
}

