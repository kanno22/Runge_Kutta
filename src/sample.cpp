/*
Runge_Kutta法の理解のための超簡単なサンプルプログラム
(Runge_Kutta法を忘れたorきちんと理解したい人向け)
*/

#include "Calc.hpp"
#include "Log.hpp"

#define MAXTIME 500//5秒

int main()
{
    Calc calc;
    Log log;

    log.log_init();

    calc.x_0=1.0;//初期条件入力

    for(int i=0;i<MAXTIME;i++)
    {
        calc.Analytical();//解析解
        calc.Euler();//Euler法で解く
        calc.Runge_Kutta();//Runge_Kutta法で解く

        log.logging(calc);//データをcsvファイルへ書き込む

        calc.Count();//時間経過
    }

    return 0;
}
