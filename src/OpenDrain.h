#ifndef OPEN_DRAIN_H
#define OPEN_DRAIN_H

#include "resource/ODRegister32.h"

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
