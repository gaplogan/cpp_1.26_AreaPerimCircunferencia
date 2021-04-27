#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    const double pi = 3.1415;
    double raio, area, perim;

    cout << "Digite o valor do raio do cÌrculo: ";    
    cin >> raio;
    // Garante um raio n√£o negativo.
    raio = abs(raio);

    area =  pi * sqrt(raio);
    perim = 2 * pi * raio;
    cout << "\n¡rea do cÌ≠rculo: " << area << endl;
    cout << "PerÌ≠metro da circunferÍncia: " << perim << endl;
    
    return 0;
}