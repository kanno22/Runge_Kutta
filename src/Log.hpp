#ifndef LOG
#define LOG

#include<fstream>
#include"Calc.hpp"

#define FILE_NAME "./log/log.csv"

using namespace std;

class Log
{
    public:
        ofstream mylog;
        void log_init();
        void logging(Calc call);

};

#endif