#include <stdio.h>
#include "zambretti.h"

int main()
{
    float newest_pressure = 1026.580039;
    float oldest_pressure = 1026.410034;

    float temperature = 18.0;
    float humidity = 80.0;
    //float current_pressure = 1012.890015;

    int current_trend = pressureTrend(newest_pressure, oldest_pressure);

    float pressure_at_sea_level = pressureSeaLevel(temperature, newest_pressure);

    //int calculation_result = caseCalculation(current_trend, pressure_at_sea_level);
    int calculation_result = caseCalculationWithSeason(current_trend, pressure_at_sea_level, humidity, 10);

    printf("Pressure trend: %d\n", calculation_result);

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
