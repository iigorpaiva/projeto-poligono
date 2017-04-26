#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

    Poligono::Poligono(Point p[],int qtd)
    {
        n=qtd;
        for(int i=0;i<n-1;i++){
            vertice[i].x = p[i].x;
            vertice[i].y = p[i].y;
        }
    }
    Poligono::Poligono(){
    }
    Poligono::~Poligono(){
        }
        void Poligono::setV(Point p){
                vertice[n].x = p.x;
                vertice[n].y = p.y;
                n++;
        }
        int Poligono::getV(){
            return n;
        }
        float Poligono::area_do_poligono(){
            float s1=0,s2=0;

            for (int i = 1;i<n;i++){
                s1=s1+vertice[i-1].x*vertice[i].y;
                s2=s2+vertice[i].x*vertice[i-1].y;
            }

            s1=s1+vertice[n-1].x*vertice[0].y;
            s2=s2+vertice[0].x*vertice[n-1].y;

            if(s1>s2){
                return ((s1-s2)/2.0);
            }
            else if (s2>s1){
                return ((s2-s1)/2.0);
            }

        }
        void Poligono::translada(float a,float b){
            for(int i=0;i<n;i++){
                vertice[i].x=vertice[i].x+a;
                vertice[i].y=vertice[i].y+b;
            }
        }
        void Poligono::rotaciona(double ang,Point x){
            double m[2][2];
            ang=(ang*3.1415)/180;
            m[0][0] = cos(ang);
            m[0][1] =-sin(ang);
            m[1][0] = sin(ang);
            m[1][1] = cos(ang);

            for(int i=0;i<n;i++){
                vertice[i].x=m[0][0]*(vertice[i].x-x.x)+m[0][1]*(vertice[i].y-x.y);
                vertice[i].y=m[1][0]*(vertice[i].x-x.x)+m[1][1]*(vertice[i].y-x.y);
            }
            for(int i=0;i<n;i++){
                vertice[i].x=vertice[i].x+x.x;
                vertice[i].y=vertice[i].y+x.y;
            }
        }
        void Poligono::imprime_poligono(){
            for(int i=0;i<n;i++){
                cout<<"("<<vertice[i].x<<","<<vertice[i].y<<")->";
            }
        }
