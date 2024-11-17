#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //elírás
    std::cout << '1-100 ertekek duplazasa' //hibás szintaxis
    for (int i = 0;) //hibás for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibás for ciklus
    {
        std::cout << "Ertek:" //hibás szintaxis (nincs pontosvessző, nincs érték)
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //hibás for ciklus
    {
        atlag += b[i] //hibás szintaxis (nincs pontosvessző)
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
