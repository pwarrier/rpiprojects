

#include <iostream>
#include <wiringPi.h>


int main()
{

	std::cout << "Raspberry pi Blink LED program !!!" << std::endl;

	if( wiringPiSetup() == -1 )
		return 1;

	pinMode( 0, OUTPUT ); //BCM_GPIO pin 17
	
	while(1)
	{
		digitalWrite( 0, 1 );
		delay( 500 );
		digitalWrite( 0, 0 );
		delay( 500 );
	}

	return 0;
}
