
#ifndef PA3__global__global_h
#define PA3__global__global_h

using namespace std;

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////

#include <assert.h> 
#include <algorithm>
#include <math.h>  
#include <set>
#include <stdio.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <unistd.h>
#include <vector>

// Redfine if you want output to go somewhere else:
#define reportf(format, args...) ( printf(format , ## args), fflush(stdout) )

// Just like 'assert()' but expression will be evaluated in the release version as well.
inline void check(bool expr) { assert(expr); }


////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////
//
typedef long long          int64;
typedef unsigned long long uint64;
typedef unsigned int       uint;

////////////////////////////////////////////////////////////////////////
///                         RANDOM NUMBERS                           ///
////////////////////////////////////////////////////////////////////////


// Returns a random float 0 <= x < 1. Seed must never be 0.
static inline double drand(double& seed) {
    seed *= 1389796;
    int q = (int)(seed / 2147483647);
    seed -= (double)q * 2147483647;
    return seed / 2147483647; }

// Returns a random integer 0 <= x < size. Seed must never be 0.
static inline int irand(double& seed, int size) {
    return (int)(drand(seed) * size); }


////////////////////////////////////////////////////////////////////////
///                         TIME AND MEMORY                          ///
////////////////////////////////////////////////////////////////////////


static inline double cpuTime(void) {
    struct rusage ru;
    getrusage(RUSAGE_SELF, &ru);
    return (double)ru.ru_utime.tv_sec + (double)ru.ru_utime.tv_usec / 1000000; }

static inline int memReadStat(int field) {
    char    name[256];
    pid_t pid = getpid();
    sprintf(name, "/proc/%d/statm", pid);
    FILE*   in = fopen(name, "rb");
    if (in == NULL) return 0;
    int     value;
    for (; field >= 0; field--)
        fscanf(in, "%d", &value);
    fclose(in);
    return value;
}

static inline int64 memUsed() { return (int64)memReadStat(0) * (int64)getpagesize(); }


#endif

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////
