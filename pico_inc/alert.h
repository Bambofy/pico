#ifndef ALERT_H
#define ALERT_H

#include "types.h"

extern "C" {
    void _alert(uintptr_t inMessage, uint32_t inLength);
}

void alert(const char * inMessage, uint32_t inLength);

#endif
