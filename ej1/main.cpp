#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class personabase
{
    private:
        int edad;
        string nombre;
    public:
        personabase(int,string);
        int obteneredad();
};
personabase::personabase(int e,string nom)
{
    this->edad=e;
    this->nombre=nom;
}
int personabase::obteneredad()
{
    return this->edad;
}
class personapublica : public personabase
{
    public:
        personapublica(int,string);
};
personapublica::personapublica(int e,string nom):personabase(e,nom)
{
}
class personaprivada : private personabase
{
    public:
        personaprivada(int,string);
};
personaprivada::personaprivada(int e,string nom):personabase(e,nom)
{
}
class personaprotegida : protected personabase
{
    public:
        personaprotegida(int,string);
};
personaprotegida::personaprotegida(int e,string nom):personabase(e,nom)
{
}

int main()
{
    personapublica *ppu=new personapublica(11,"matias");
    personaprivada *ppri=new personaprivada(20,"lucas");
    personaprotegida *ppro=new personaprotegida(30,"juan");
    cout<<ppu->obteneredad()<<endl;
    cout<<ppri->obteneredad()<<endl;
    cout<<ppro->obteneredad()<<endl;
    system("PAUSE");
    return 0;
}
