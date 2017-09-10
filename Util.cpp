#include "Util.h"

Util::Util()
{


}

int Util::round(float n) {
    if (n < 0) {
        n -= 0.5;
    } else{
        n += 0.5;
    }

    return (int) n;
}


float Util::menor(float a, float b) {
    if(a < b)
        return a;
    return b;
}

float Util::maior(float a, float b) {
    if(a > b)
        return a;
    return b;
}
