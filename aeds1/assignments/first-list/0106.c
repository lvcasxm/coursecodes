#include <stdio.h>
#include <locale.h>

double daily_rate(void);
double discount(double daily_rate);
double max_occupation(double discount);
double min_occupation(double daily_rate);
double difference(double max_amount, double min_amount);

int main()
{
    setlocale(LC_ALL, "Portuguese");
}

double daily_rate(void)
{
    double daily_rate = 0;

    do
    {
        printf("Daily rate: ");
        scanf("%lf", &daily_rate);
    } while (daily_rate < 1);

    return daily_rate;
}

double discount(double daily_rate)
{
    double discount = 0;

    discount = daily_rate * 0.25;

    return discount;
}

double max_occupation(double discount)
{
    double max_amount = 0;
    int max_occupation = 60;

    max_amout = occupation * discount;

    return max_amount;
}

double min_occupation(double daily_rate)
{
    double min_amount = 0;
    int min_occupation = 37;

    min_amount = occupation * daily_rate;

    return min_amount;
}

double difference(double max_amount, double min_amount)
{
    double difference = 0;
    
    difference = max_amount - min_amount;

    return difference;
}