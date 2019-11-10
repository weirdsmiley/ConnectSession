#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int grepLoss()
{
	// returns : 0 if finds, -1 if doesn't
	return 0;
}

int check_connection()
{
	/* Returns 0 if connection is established,
	 * otherwise -1
	 */
	int tmp1 = system("ping -c1 www.google.com > /home/neon/.ConnectSession.conf");

	return grepLoss();
}


int main(int argc, char *argv[])
{
	int errno;
	char network_off[] = "nmcli networking off";
	char network_on[]  = "nmcli networking on";

	FILE *fileptr = fopen("/home/neon/.ConnectSession.conf", "w");
	fclose(fileptr);

	while(1)
	{
		if(!check_connection())
		{
			system(network_off);
			system(network_on);
		}
		break;
		sleep(2);
	}
	return 0;
}
