//    Title:                    Line Follow
//    Files:                   kipr/wombat.h, stdio.h
//    Semester:           Rancho Botball Spring 2024
//
//    Author:                Arvind Sainathan
//    Pair Partner(s)   Krishnaa Rajesh
//    Email:                  as91657@student.musd.org
//    Coach:                Mr. Tran
//    Credits:               KISS resources, Botball discord
//
//
#include <kipr/wombat.h>
#include <stdio.h>

int main()
{
	create3_connect();
	printf("Follow the non-yellow brick road!\n");
	while (a_button() == 0) //Used for a continous loop
	{
		if (create3_sensor_cliff(1) >= 2195) //uses cliff sensors to locate the black line
		{
			create3_velocity_set_components(0.1, 0.3); //Ses the velocity components on the Create 3
		}
	else
	{
		create3_velocity_set_components(0.1, -0.3);
	}
	}
create3_wait();
return 0; //Ends the main function
}
