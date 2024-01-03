#include <stdio.h>
#include "zambretti.h"

int main()
{
    int newest_pressure = 1000;
    int oldest_pressure = 980;

    float temperature = 25.0;
    float current_pressure = 950.0;

    int current_trend = pressureTrend(newest_pressure, oldest_pressure);

    float pressure_at_sea_level = pressureSeaLevel(temperature, current_pressure);

    int calculation_result = caseCalculation(current_trend, pressure_at_sea_level);

    char *weather_forecast = lookUpTable(calculation_result);

    printf("Pressure trend: ");
    switch (current_trend)
    {
    case FALLING:
        printf("Falling\n");
        break;
    case RISING:
        printf("Rising\n");
        break;
    case STEADY:
        printf("Steady\n");
        break;
    default:
        printf("Error in pressure trend.\n");
        break;
    }

    printf("Sea level pressure: %.2f\n", pressure_at_sea_level);
    printf("Trend value: %d\n", calculation_result);
    printf("Forecast: %s\n", weather_forecast);

    return 0;
}
