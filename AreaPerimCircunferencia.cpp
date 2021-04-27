#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    const double pi = 3.1415;
    double raio, area, perim;

    cout << "Digite o valor do raio do c�rculo: ";    
    cin >> raio;
    // Garante um raio não negativo.
    raio = abs(raio);

    area =  pi * sqrt(raio);
    perim = 2 * pi * raio;
    cout << "\n�rea do c�rculo: " << area << endl;
    cout << "Per�metro da circunfer�ncia: " << perim << endl;
    
    return 0;
}