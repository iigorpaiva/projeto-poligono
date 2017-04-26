#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"

class Retangulo: public Poligono
{
private:
    float x;
    float y;
    float l;
    float h;

public:

    Retangulo(float ma,float mb, float larg,float altura);

    Retangulo();
    ~Retangulo();
    /**
     * @brief setX atribui valor para x
     * @param ax
     */
    void setX(float ax);
    /**
     * @brief setY atribui valor para y
     * @param ay
     */
    void setY(float ay);
    /**
     * @brief setL atribui o valor para largura
     * @param al
     */
    void setL(float al);
    /**
     * @brief setH atribui o valor para altura do retangulo
     * @param ah
     */
    void setH(float ah);
    /**
     * @brief getX recupera o valor do ponto em x
     * @return
     */
    float getX();
    /**
     * @brief getY recupera o valor do ponto em y
     * @return
     */
    float getY();
    /**
     * @brief getL recupera o valor da largura do retangulo
     * @return
     */
    float getL();
    /**
     * @brief getH recupera o valor da altura do retangulo
     * @return
     */
    float getH();
};

#endif // RETANGULO_H
