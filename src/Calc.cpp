#include "Calc.hpp"

Calc::Calc()
{
    x_0=0.0;
    x_r=0.0;
    x_e=0.0;
    x_a=0.0;
    dt=0.01;//10ms
    t=0.0;
    count=0;
}

double Calc::f(double t,double x)
{
    double dx;

    dx=x*t;//微分方程式入力

    return dx;
}

void Calc::Runge_Kutta()
{
    double k1,k2,k3,k4;

    if(count==0)
    {
        x_r=x_0;  
    }
    else
    {
        k1=dt*f(t,x_r);
        k2=dt*f(t+(dt/2),x_r+(k1/2));
        k3=dt*f(t+(dt/2),x_r+(k2/2));
        k4=dt*f(t+dt,x_r+k3);
    
        x_r=x_r+(k1+2*k2+2*k3+k4)/6;
    }
}

void Calc::Euler()
{
    if(count==0)
    {
        x_e=x_0;
    }   
    else
    {
        x_e=x_e+dt*f(t,x_e);
    }
}

void Calc::Analytical()
{
    x_a=x_0*exp(0.5*t*t);//解析解入力(特殊解)
}

void Calc::Count()
{
    count++;
    t+=dt;
}
