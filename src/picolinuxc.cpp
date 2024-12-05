
#include "pico/stdlib.h"
#include "unistd.h"

int usleep(useconds_t us) {
    sleep_us(us);
    return 0;
}
unsigned int sleep(unsigned int seconds) {
    sleep_ms(seconds * 1000);
    return 0;
}