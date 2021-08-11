#!/bin/bash
if [ "$EUID" -ne 0 ]
then
	echo "Please run this program as root by typing \"sudo ./INSTALL.sh\""
	exit
else
	sudo apt-get install g++
	g++ main.cpp -o askgod
	mv askgod /bin/
	cp askgod.desktop /usr/share/applications/
	cp askgod.png /usr/share/icons/
	echo "Installation Complete. You may ask God questions now"
fi
