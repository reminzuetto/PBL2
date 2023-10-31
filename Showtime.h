#include <iostream>
#include <string.h>
#pragma once

using namespace std;

class Showtime {

    private:
        string time;

    public:
        Showtime();
        void input();
        void output();
        string getShowTime();
};