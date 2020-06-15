#include"../ANSICF.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main()
{
    struct tm crtime;
    printf("\e[?25l");
    while(1)
    {
        time_t timeS=time(0);
        localtime_r(&timeS, &crtime);
        printf(B GRN "%i:" BLU "%i:"RED"%i\r"RES,crtime.tm_hour,crtime.tm_min,crtime.tm_sec );
        fflush(stdout);
        sleep(1);
    }   
}
