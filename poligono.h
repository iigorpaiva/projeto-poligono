#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono{

private:
    Point vertice[100];
    int n=0;
public:

    Poligono(Point p[100],int qtd);

    Poligono();
    ~Poligono();
    /**
     * @brief setV atribui valor para vertice (v)
     * @param p
     */
    void setV(Point p);
    /**
     * @brief getV recupera valor de v
     * @return
     */
    int getV();
    /**
     * @brief area_do_poligono calcula a area do poligono
     * @return
     */
    float area_do_poligono();
    /**
     * @brief translada movimenta o poligono
     * @param a
     * @param b
     */

    void translada(float a,float b);
    /**
     * @brief rotaciona rotaciona o poligono
     * @param teta
     * @param x
     */
    void rotaciona(double teta,Point x);
    /**
     * @brief imprime_poligono imprime
     */
    void imprime_poligono();

};

#endif // POLIGONO_H
