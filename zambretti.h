#include <stdio.h>
#include <string.h>
#include <math.h>

#define ALTITUDE_M 558 /* Set your location altitude (in meters) before run */

enum pressure_trend
{
    FALLING,
    STEADY,
    RISING
};

char *lookUpTable(int z);
float pressureSeaLevel(float t, float p);
int pressureTrend(int n, int o);
int caseCalculation(int c, float p);