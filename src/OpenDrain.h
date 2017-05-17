#ifndef OPEN_DRAIN_H
#define OPEN_DRAIN_H

#ifdef PIO_A_TEENSY32
#include "resource/ODRegister32.h"
#endif

#ifdef PIO_A_TEENSY35
#include "resource/ODRegister35.h"
#endif

#ifdef PIO_A_TEENSY36
#include "resource/ODRegister36.h"
#endif

namespace OpenDrain{

    template<class REST>
    void setOpenDrain(const REST rest){
        OpenDrainUtils::Registers* regPtr = new OpenDrainUtils::Registers;
        *(regPtr -> corePinConfig[rest]) = regPtr -> ppom;
        delete regPtr;
    }

    template<class FIRST, class... REST>
    void setOpenDrain(const FIRST first, const REST... rest){
        OpenDrainUtils::Registers* regPtr = new OpenDrainUtils::Registers;
        *(regPtr -> corePinConfig[first]) = regPtr -> ppom;
        setOpenDrain(rest...);
        delete regPtr;
    }
};
#endif /* end of include guard: OPEN_DRAIN_H */
