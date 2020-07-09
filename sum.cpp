#include "sum.h"

int sum(int  n) {
    int _sum = 0;
    
    for(int i = 1; i <= n; i++) {
        _sum += i;    
    }

    return _sum;
}
