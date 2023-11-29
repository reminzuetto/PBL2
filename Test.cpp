#include "Film.h"

int main() {

    Vector<Showtime> s;
    for (int i = 0; i < 2; i ++) {

        Showtime sh;
        sh.Input();
        s.push_back(sh);

    }

    for (int i = 0; i < 2; i ++) {

        Showtime sh;
        sh = s[i].getData();
        sh.Output();

    }
} 