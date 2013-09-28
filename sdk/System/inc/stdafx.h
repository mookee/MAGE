#pragma once

#include <iostream>
#include <cerrno>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>

#ifdef _WIN32
#include <Windows.h>
#else
#include <sys/time.h>
#endif

#include "BaseType.h"

using namespace std;