#include"Log.hpp"

void Log::log_init()
{
    mylog.open(FILE_NAME,std::ios::trunc);//上書きモード

    mylog<<"time\t"<<"x_a\t"<<"x_e\t"<<"x_r\t"<<endl;

}

void Log::logging(Calc call)
{
    mylog<<call.t<<"\t"<<call.x_a<<"\t"<<call.x_e<<"\t"<<call.x_r<<endl;
}