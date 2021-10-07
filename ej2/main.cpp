#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
using namespace std;

class figura
{
    private:
        string nombre;
    public:
        string getnombre();
        void setnombre(string);
        figura(string);
};
figura::figura(string nom)
{
    this->nombre=nom;
}
string figura::getnombre()
{
    return this->nombre;
}
void figura::setnombre(string nom)
{
    this->nombre=nom;
}
class circulo : public figura
{
    private:
        double diametro;
    public:
        circulo(string,double);
        void setdiametro(double);
        double getdiametro();
        double perimetro();
        double area();
};
circulo::circulo(string nom,double diam):figura(nom)
{
    this->diametro=diam;
}
void circulo::setdiametro(double d)
{
    this->diametro=d;
}
double circulo::getdiametro()
{
    return this->diametro;
}
double circulo::perimetro()
{
    double p=2*(this->diametro/2)*3.14;
    return p;
}
double circulo::area()
{
    double p=3.14*((this->diametro/2)*(this->diametro/2));
    return p;
}
class rectangulo : public figura
{
    private:
        double base;
        double altura;
    public:
        rectangulo(string,double,double);
        void setbase(double);
        double getbase();
        void setaltura(double);
        double getaltura();
        double perimetro();
        double area();
};
rectangulo::rectangulo(string nom,double ba,double alt):figura(nom)
{
    this->base=ba;
    this->altura=alt;
}
void rectangulo::setbase(double b)
{
    this->base=b;
}
double rectangulo::getbase()
{
    return this->base;
}
void rectangulo::setaltura(double a)
{
    this->altura=a;
}
double rectangulo::getaltura()
{
    return this->altura;
}
double rectangulo::perimetro()
{
    double p=this->base*this->altura;
    return p;
}
double rectangulo::area()
{
    double p=(this->base*this->altura)/2;
    return p;
}
class triangulo : public figura
{
    private:
        double catmenor;
        double catmayor;
        double hipotenusa;
    public:
        triangulo(string,double,double,double);
        double getcmenor();
        void setcmenor(double);
        double getcmayor();
        void setcmayor(double);
        double gethipo();
        void sethipo(double);
        double perimetro();
        double area();
};
triangulo::triangulo(string nom,double cmenor,double cmayor,double hipo) : figura(nom)
{
     this->catmenor=cmenor;
     this->catmayor=cmayor;
     this->hipotenusa=hipo;
}
double triangulo::getcmenor()
{
    return this->catmenor;
}
void triangulo::setcmenor(double cme)
{
    this->catmenor=cme;
}
double triangulo::getcmayor()
{
    return this->catmayor;
}
void triangulo::setcmayor(double cma)
{
    this->catmayor=cma;
}
double triangulo::gethipo()
{
    return this->hipotenusa;
}
void triangulo::sethipo(double hip)
{
    this->hipotenusa=hip;
}
double triangulo::perimetro()
{
    double perim;
    perim=this->catmayor+this->catmenor+this->hipotenusa;
    return perim;
}
double triangulo::area()
{
    double area;
    area=(this->catmenor*this->catmayor)/2;
    return area;
}
int main()
{
    circulo *c=new circulo("circulo",10);
    rectangulo *r=new rectangulo("rectangulo",10,5);
    triangulo *t=new triangulo("triangulo",4,5,7);
    cout<<"nombre: "<<c->getnombre()<<"\n"<<"perimetro: "<<c->perimetro()<<"\n"<<"area: "<<c->area()<<endl;
    cout<<"nombre: "<<r->getnombre()<<"\n"<<"perimetro: "<<r->perimetro()<<"\n"<<"area: "<<r->area()<<endl;
    cout<<"nombre: "<<t->getnombre()<<"\n"<<"perimetro: "<<t->perimetro()<<"\n"<<"area: "<<t->area()<<endl;
    system("PAUSE");
    return 0;
}
