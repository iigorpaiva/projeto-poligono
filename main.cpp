#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
#include <cmath>

using namespace std;

int main()
{
    Point p(-1,2.5);
    Retangulo r(0,0,4,3);
    cout<<"poligono"<<endl;
    r.imprime_poligono();
    cout<<"Area do retangulo :"<<r.area_do_poligono()<<endl;
    r.translada(-3,4);
    cout<<"Area do retangulo :"<<r.area_do_poligono()<<endl;
    r.rotaciona(30,p);
    cout<<" rotacionada"<<endl;
    r.imprime_poligono();
    return 0;
}

