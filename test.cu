#include <stdio.h>
#include <cstdint>
#include <unistd.h>

#define FMTLOG_HEADER_ONLY
#include "fmtlog.h"

int main(void)
{
    FMTLOG(fmtlog::INF, "fmt style {}", 12345);
    FMTLOG(fmtlog::INF, "fmt style {}", 3.14);

    return 0;
}