#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class eh a classe do ponto
 */
class Point{
public:
    float x;
    float y;
public:
    /**
     * @brief Point eh o construtor
     * @param ma  parametro passado para o construtor
     * @param mb  parametro passado para o construtor
     */
    Point(float ma=0,float mb=0);
    ~Point();
    /**
     * @brief setX atribui um valor para x
     * @param ma parametro que sera passado para a variavel x
     */
    void setX(float ma);
    /**
     * @brief setY atribui um valor para y
     * @param mb parametro que sera passado para a variavel y
     */
    void setY(float mb);
    /**
     * @brief setXY atribuir  numa mesma funcao valores para x e y
     * @param ma parametros recebidos pelo setxy
     * @param mb
     */
    void setXY(float ma,float mb);
    /**
     * @brief getX recupera o valor de x
     * @return
     */
    float getX();
    /**
     * @brief getY recupera o valor de y
     * @return
     */
    float getY();
    /**
     * @brief add adiciona as coordenadas x e y
     * @param p1 ++++++
     * @return
     */
    Point add(Point p1);
    /**
     * @brief sub subtrai as coordenadas de x e y do ponto com as de x1 y1 fornecidos
     * @param p1
     * @return
     */
    Point sub(Point p1);
    /**
     * @brief norma serve para calcular a distancia entre pontos
     * @return
     */
    float norma();
    /**
     * @brief translada movimenta o ponto
     * @param a
     * @param b
     */
    void translada(float a, float b);
    /**
     * @brief imprime funcao para imprimir
     */
    void imprime();
};

#endif // POINT_H
