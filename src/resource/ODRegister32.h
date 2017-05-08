#ifndef ODU_REGISTER32
#define ODU_REGISTER32

#include <array>
namespace OpenDrainUtils{
    struct Registers{
        Registers()
        : corePinConfig{
            (uint32_t*)0x4004a040,
            (uint32_t*)0x4004a044,
            (uint32_t*)0x4004c000,
            (uint32_t*)0x40049030,
            (uint32_t*)0x40049034,
            (uint32_t*)0x4004c01c,
            (uint32_t*)0x4004c010,
            (uint32_t*)0x4004c008,
            (uint32_t*)0x4004c00c,
            (uint32_t*)0x4004b00c,
            (uint32_t*)0x4004b010,
            (uint32_t*)0x4004b018,
            (uint32_t*)0x4004b01c,
            (uint32_t*)0x4004b014,
            (uint32_t*)0x4004c004,
            (uint32_t*)0x4004b000,
            (uint32_t*)0x4004a000,
            (uint32_t*)0x4004a004,
            (uint32_t*)0x4004a00c,
            (uint32_t*)0x4004a008,
            (uint32_t*)0x4004c014,
            (uint32_t*)0x4004c018,
            (uint32_t*)0x4004b004,
            (uint32_t*)0x4004b008,
            (uint32_t*)0x40049014,
            (uint32_t*)0x4004a04c,
            (uint32_t*)0x4004d004,
            (uint32_t*)0x4004b024,
            (uint32_t*)0x4004b020,
            (uint32_t*)0x4004b028,
            (uint32_t*)0x4004b02c,
            (uint32_t*)0x4004d000,
            (uint32_t*)0x4004a048,
            (uint32_t*)0x40049010
        }
        {}

        std::array<uint32_t*, 34> corePinConfig;
        const uint32_t ppom = 0x120;
    };
};


#endif /* end of include guard: ODU_REGISTER32 */
