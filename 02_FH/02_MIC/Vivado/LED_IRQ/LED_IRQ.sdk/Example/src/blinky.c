/* Borrowed from ZynqBook Tutorials */

/* Include Files */
#include "xparameters.h"
#include "xgpio.h"
#include "xstatus.h"
#include "xil_printf.h"

/* Definitions */
#define GPIO_DEVICE_ID_1  XPAR_AXI_GPIO_1_DEVICE_ID	/* GPIO device that LEDs are connected to */
#define GPIO_DEVICE_ID_0  XPAR_AXI_GPIO_0_DEVICE_ID	/* GPIO device that BTNs are connected to */
#define LED 0x01									/* Initial LED value - 00XX */
#define LED_DELAY 10000000							/* Software delay length */
#define LED_CHANNEL 1								/* GPIO port for LEDs */
#define printf xil_printf							/* smaller, optimized printf */

XGpio Gpio;											/* GPIO Device driver instance */

int LEDOutputExample(void)
{

	volatile int Delay;
	int Status;
	int led = LED;
	int ledA = LED; /* Hold current LED value. Initialize to LED definition */
	int ledB = ~ledA;
	xil_printf("Gratulation - done!\r\n");

		/* GPIO driver initialization */
		Status = XGpio_Initialize(&Gpio, GPIO_DEVICE_ID_0);
		if (Status != XST_SUCCESS) {
			return XST_FAILURE;
		}

		/*Set the direction for the LEDs to output. */
		XGpio_SetDataDirection(&Gpio, LED_CHANNEL, 0x00);

		/* Loop forever blinking the LED. */
			while (1) {
				/* Write output to the LEDs. */
				XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, led);

				/* Flip LEDs. */
				if(led == ledA)
				{
					led = 0;
				}
				else
				{
					led = ledA;
				}

				/* Wait a small amount of time so that the LED blinking is visible. */
				for (Delay = 0; Delay < LED_DELAY; Delay++);
			}

		return XST_SUCCESS; /* Ideally unreachable */
}

/* Main function. */
int main(void){

	int Status;

	/* Execute the LED output. */
	Status = LEDOutputExample();
	if (Status != XST_SUCCESS) {
		xil_printf("GPIO output to the LEDs failed!\r\n");
	}

	return 0;
}

