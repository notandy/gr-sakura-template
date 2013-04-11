#include "gpio.h"

#define sleep(X) for(j = 0; j < X*1000000; j++) {}

int main()
{
	int j;
	char i = 0;

	/* Set Pin PA0-3 to Output (PA == PortA) */
	GPIO_DIR(GPIO_PORTA) = GPIO_OUTPUT << 0 | GPIO_OUTPUT << 1 | GPIO_OUTPUT << 2 | GPIO_OUTPUT << 6;

	while(1) {
		/* Set GPIOs according to i */
		GPIO_SET(GPIO_PORTA) = i++ & (1 << 0 | 1 << 1 | 1 << 2 | 1 << 6);
		sleep(1)
	}
}
