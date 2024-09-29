#include <iostream>
#include <string>

/*Namespace --> Para poder encapsular atributos, objetos, funciones o variables con nombres iguales*/

int num = 1;
int f(void){return  1;}

namespace foo
{
    int num = 2;
    int f(void){return 2;}
}

namespace sexo
{
    int num = 3;
    int f(void){return 3;}
}

/*int main(void)
{
    std::string sexo;

    sexo = "mucho";
    std::cout<<"sexooo: "<<sexo<<std::endl;
    return (0);
}
*/
int main(void)
{
    std::cout<<num<<std::endl;
    std::cout<<f()<<std::endl;
    std::cout<<foo::num<<std::endl;
    std::cout<<foo::f()<<std::endl;
    std::cout<<sexo::num<<std::endl;
    std::cout<<sexo::f()<<std::endl;
    return (0);
}