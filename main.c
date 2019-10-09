#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int check_connection()
{
	/* Returns 0 if connection is established,
	 * otherwise -1
	 */
	
	return 1;
}


int main(int argc, char *argv[])
{
	int errno;
	char network_off[] = "nmcli networking off";
	char network_on[]  = "nmcli networking on";

	while(1)
	{
		if(!check_connection())
		{
			system(network_off);
			system(network_on);
		}
		sleep(3);
	}
	return 0;
}
