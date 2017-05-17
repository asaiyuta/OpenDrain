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
            (uint32_t*)0x4004d068,
            (uint32_t*)0x40049014,
            (uint32_t*)0x40049038,
            (uint32_t*)0x4004903c,
            (uint32_t*)0x40049040,
            (uint32_t*)0x4004a048,
            (uint32_t*)0x4004a04c,
            (uint32_t*)0x4004a028,
            (uint32_t*)0x4004a02c,
            (uint32_t*)0x4004d060,
            (uint32_t*)0x4004d064,
            (uint32_t*)0x4004b020,
            (uint32_t*)0x4004b024,
            (uint32_t*)0x4004b028,
            (uint32_t*)0x4004b02c,
            (uint32_t*)0x40049044,
            (uint32_t*)0x40049070,
            (uint32_t*)0x40049074,
            (uint32_t*)0x40049068,
            (uint32_t*)0x4004a050,
            (uint32_t*)0x4004a058,
            (uint32_t*)0x4004a05c,
            (uint32_t*)0x4004a054,
            (uint32_t*)0x4004c020,
            (uint32_t*)0x4004c024,
            (uint32_t*)0x4004a010,
            (uint32_t*)0x4004a014,
            (uint32_t*)0x4004c038,
            (uint32_t*)0x4004c034,
            (uint32_t*)0x4004c030,
            (uint32_t*)0x4004c03c,
            (uint32_t*)0x4004c02c,
            (uint32_t*)0x4004d028,
            (uint32_t*)0x4004d02c
        }
        {}

        std::array<uint32_t*, 58> corePinConfig;
        const uint32_t ppom = 0x120;
    };
};


#endif /* end of include guard: ODU_REGISTER32 */
