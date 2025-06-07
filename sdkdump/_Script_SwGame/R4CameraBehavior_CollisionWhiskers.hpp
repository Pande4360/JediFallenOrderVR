#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_CollisionWhiskers : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x20]; public:
    float& get_FinalTraceSize();
    int32_t& get_NumSmoothingPasses();
    float& get_OffsetSmoothTime();
    float& get_PropagationFactor();
    float& get_ZPropagationReductionFactor();
    bool get_bDoObstructionCheck();
    void set_bDoObstructionCheck(bool value);
    bool get_bStayAboveNavSurface();
    void set_bStayAboveNavSurface(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
