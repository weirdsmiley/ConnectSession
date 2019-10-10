#!/bin/bash

if  hashcash -v > /dev/null 2>&1
then
	echo "Done!\n"
else
	sudo apt install nmcli
fi
