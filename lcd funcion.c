
#include <stdio.h>
#include <stdlib.h>
#include <MKL25Z4.H>
#include "lcd.h"

int main(void)
{
	LCD_init();
	LCD_erase();
	LCD_coordinate(3,1);
	LCD_Write("WaWaWa");
	LCD_constleft(200,100);
}

