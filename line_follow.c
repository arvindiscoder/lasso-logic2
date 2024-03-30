#include <kipr/wombat.h>
#include <stdio.h>

int main()
{
	create3_connect();
	printf("Follow the non-yellow brick road!\n");
	while (a_button() == 0)
	{
		if (create3_sensor_cliff(1) >= 2195)
		{
			create3_velocity_set_components(0.1, 0.3);
		}
	else
	{
		create3_velocity_set_components(0.1, -0.3);
	}
	}
create3_wait();
return 0;
}