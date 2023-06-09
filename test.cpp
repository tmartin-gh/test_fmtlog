#include <stdio.h>
#include <cstdint>
#include <unistd.h>

#define FMTLOG_HEADER_ONLY
#include "fmtlog.h"

int main(void)
{
    fmtlog::setHeaderPattern("{HMSf} [{l}]");
    fmtlog::startPollingThread(100'000'000);
    fmtlog::preallocate();
    FMTLOG(fmtlog::INF, "fmt style {}", 12345);
    FMTLOG_PRINTF(fmtlog::INF, "printf style %d", 12345);
    return 0;
}
