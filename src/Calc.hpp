#ifndef CALC
#define CALC

#include <math.h>

class Calc
{
    private:
        double dt;  
        int count;
        
    public:   
        double x_0;//初期条件
        double x_r;//Runge_Kutta
        double x_e;//Euler
        double x_a;//解析解
        double t;      
        
        Calc();
        double f(double t,double x);//微分方程式
        void Runge_Kutta();
        void Euler();
        void Analytical();
        void Count();
};

#endif