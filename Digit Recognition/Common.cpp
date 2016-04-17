#include <cstdlib>
#include "Common.h"

float random()
{
    return rand() / float(RAND_MAX + 1);
}
float random(float k)
{
    return (random() - 0.5f) * k;
}
