#include <stdio.h>
#include "zephyr/kernel.h"

int main(void)
{
    while (true)
    {
        printk("hello world\n");
        k_msleep(1000);
    }

    return 0;
}
