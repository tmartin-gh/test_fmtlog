#include <stdio.h>
#include <cstdint>
#include <unistd.h>

#define FMTLOG_HEADER_ONLY
#include "fmtlog.h"

int main(void)
{
    FMTLOG_ONCE_PRINTF(fmtlog::INF, "printf style %d", 12345);
    FMTLOG(fmtlog::INF, "fmt style {}", 12345);
    return 0;
}
