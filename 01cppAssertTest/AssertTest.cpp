#include <cassert>
#include <string>

using namespace std::literals;

int main()
{
    // Prueba de tipo de dato int

    assert(1 + 1 == 2);
    assert(5 - 6 == -1);
    assert(1 * 2 == 2);
    assert(4 / 2 == 2);
    assert(5 % 2 == 1);
    assert(25 / 5 < 30);
    assert(26 > 15 and 26 > 20);
    assert(5 != 4);


    //Prueba de tipo de dato bool
    assert(true and (false + 1));
    assert(false or true and true);
    assert(true + true - 1);
    assert(false + 1);
    assert(false + 5 - 4);
    

    //Prueba de tipo de dato double
    assert(1.0 + 1.0 == 2);
    assert(1.0 * 1.0 == 1.0);
    assert(1.5 * 2 == 3.0);
    assert(1.0 - 5 == -4);
    

    //Prueba de strings
    assert("prue"s + "ba"s == "prueba"s);
    assert("prueba"s > "auto"s);
    assert("prueba"s < "z"s);
    assert("prueba"s == "prueba"s);
    assert("prueba"s == "auto"s or "prueba"s != "auto"s);
    

    //Prueba de chars
    assert('A' > 2);
    assert('A' == 65);
    assert('A' + '!' == 65 + 33);
    assert('A' != '60');

}
