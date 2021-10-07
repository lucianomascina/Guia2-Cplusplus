#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class cliente
{
    private:

    public:
        cliente(string,int);
        string apellido;
        int dni;
        void setapellido(string);
        string getapellido();
        void setdni(int);
        int getdni();
};
cliente::cliente(string ap,int d)
{
    this->apellido=ap;
    this->dni=d;
}
void cliente::setapellido(string ap)
{
    this->apellido=ap;
}
string cliente::getapellido()
{
    return this->apellido;
}
void cliente::setdni(int d)
{
    this->dni=d;
}
int cliente::getdni()
{
    return this->dni;
}

class articulo
{
    private:

    public:
        articulo(int,double,string);
        int codigo;
        double importe;
        string descripcion;
        void setcodigo(int);
        int getcodigo();
        void setimporte(double);
        double getimporte();
        void setdescripcion(string);
        string getdescripcion();
};
articulo::articulo(int c,double i,string d)
{
    this->codigo=c;
    this->importe=i;
    this->descripcion=d;
}
void articulo::setcodigo(int c)
{
    this->codigo=c;
}
int articulo::getcodigo()
{
    return this->codigo;
}
void articulo::setimporte(double i)
{
    this->importe=i;
}
double articulo::getimporte()
{
    return this->importe;
}
void articulo::setdescripcion(string d)
{
    this->descripcion=d;
}
string articulo::getdescripcion()
{
    return this->descripcion;
}

class factura : public cliente , public articulo
{
    private:
        string fecha;
        char* tipo;
    public:
        factura(string,char*,string,int,int,double,string);
        void setfecha(string);
        string getfecha();
        void settipo(char*);
        char* gettipo();
        void imprimirfactura();
};
factura::factura(string f,char* t,string apellido,int dni,int cod,double importe,string descripcion):cliente(apellido,dni),articulo(cod,importe,descripcion)
{
    this->fecha=f;
    this->tipo=new char(sizeof(t));
    strcpy(this->tipo,t);
}
void factura::setfecha(string f)
{
    this->fecha=f;
}
string factura::getfecha()
{
    return this->fecha;
}
void factura::settipo(char* t)
{
    strcpy(this->tipo,t);
}
char* factura::gettipo()
{
    return this->tipo;
}
void factura::imprimirfactura()
{
    cout<<"factura tipo: "<<this->tipo<<"\nfecha: "<<this->fecha<<"\ncliente: "<<"\n\tapellido: "<<this->apellido<<"\n\tdni: "<<this->dni<<"\narticulo: "<<"\n\tcodigo: "<<this->codigo<<"\n\timporte: "<<this->importe<<"\n\tdescripcion: "<<this->descripcion<<endl;
}

int main()
{
    factura *f=new factura("1/05/2017",(char*)"B","mascina",36156203,24,150.25,"vaso");
    f->imprimirfactura();
    system("PAUSE");
    return 0;
}
