#!/bin/bash

if  nmcli -v > /dev/null 2>&1
then
	echo "Up-to-date!"
else
	sudo apt install network-manager
fi
