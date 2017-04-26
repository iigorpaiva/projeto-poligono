#include "point.h"
#include <iostream>
#include <cmath>

using namespace std;

        Point::Point(float ma,float mb){
            x = ma;
            y = mb;
        }
        Point::~Point(){

        }

        void Point::setX(float ma){
            x = ma;

        }

        void Point::setY(float mb){
            y = mb;
        }

        void Point::setXY(float ma,float mb){
            x = ma;
            y = mb;
        }

        float Point::getX(){
            return x;
        }

        float Point::getY(){
            return y;
        }

        Point Point::add(Point p1){
            Point p2;
            p2.x = x + p1.x;
            p2.y = y + p1.y;
            return p2;
        }

        Point Point::sub(Point p1){
            Point p2;
            p2.x = x - p1.x;
            p2.y = y - p1.y;
            return p2;
        }

        float Point::norma(){
            return sqrt(x*x+y*y);
        }

        void Point::translada(float a, float b){
            x = x + a;
            y = y + b;
        }

        //Point translada(float a, float b);
        void Point::imprime(){
            cout<< " ("<< x << " , "<<y <<")"<<endl;
        }



