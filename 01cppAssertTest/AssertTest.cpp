#include <cassert>
//#include <iostream>
//#include <iomanip>
#include <string>

using namespace std::literals;

int main()
{
    assert(2 == 1 + 1);

    //Prueba de tipo de dato bool
    assert(true);
    assert(false == false);
    assert(true != false);
    assert(not false);
    assert(not false == true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false == false);
    assert((false or true) and false == false);

    assert(true + true - 1);
    assert(false + 1);
    assert(false + 5 - 4);

    //Prueba de tipo de dato double
    assert(2.0 == 1.0 + 1.0);
    assert(0.1 == 1.0 / 10.0);
    assert(1 == 1.0);
    assert(2.0 == 1 + 1.0);
    assert(2 == 1 + 1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';

    assert(1.0 * 1.0 == 1.0);
    assert(1.5 * 2 == 3.0);

    //Prueba de strings
    assert("pacheco"s == "pa"s + "checo"s);
    assert("pacheco"s.length() == 7); //length("pacheco")

    /* Posibles pruebas :   Quitar caracteres? pacheco - co = pache
                            Quitar caracteres en lugares especificos? pacheco - che = paco
                            Cambiar minusculas por mayusculas? (quitar caracteres en lugares especificos + sumar) pacheco + P = Pacheco
                            */


    //Prueba de chars
    assert('A' == 65);
    assert('A' + '!' == 65 + 33);
    assert("A" == "A"s);
}
