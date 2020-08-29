#pragma once

#if WIN32
#else // Posix envs
    #include "unistd.h"
    #include "termios.h"
#endif

#include <iostream>
#include <cstdio>

namespace customLib
{
    char getch();
}
