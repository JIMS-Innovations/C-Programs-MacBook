/**
 * @file time_conversion.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-08-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    char result[32];
    int X;
    int minute = 60;
    int hour = 3600;
    int day = 86400;
    int week = 604800;
    int w, d, h, m, s, r;
    int n = 0;
    /*
     * 60 sec = 1 minute
     * 3600 sec = 1 hour
     * 86400 sec = 1 day
     * 604800 sec = 1 week
     */
    printf("Please enter the time in seconds: ");
    scanf("%d", &X);

    w = X / week;
    r = X % week;
    d = r / day;
    r = r % day;
    h = r / hour;
    r = r % hour;
    m = r / minute;
    r = r % minute;
    s = r;

    (w > 0) ? n++ : n;
    (d > 0) ? n++ : n;
    (h > 0) ? n++ : n;
    (m > 0) ? n++ : n;
    (s > 0) ? n++ : n;

    switch (n)
    {
    case 5:
        sprintf(result, "%dw%dd%dh%dm%ds", w, d, h, m, s);
        break;
    case 4:
        sprintf(result, "%dd%dh%dm%ds", d, h, m, s);
        break;
    case 3:
        sprintf(result, "%dh%dm%ds", h, m, s);
        break;
    case 2:
        sprintf(result, "%dm%ds", m, s);
        break;
    case 1:
        sprintf(result, "%ds", s);
        break;
    default:
        break;
    }
    printf("%d\n", n);
    printf("%s\n", result);
    return 0;
}
