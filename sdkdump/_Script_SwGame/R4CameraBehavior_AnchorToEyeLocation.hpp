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
struct R4CameraBehavior_AnchorToEyeLocation : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x28]; public:
    float& get_AttachToleranceHorizontal();
    float& get_AttachToleranceVertical();
    void* get_Offset();
    bool get_bDoOffsetTrace();
    void set_bDoOffsetTrace(bool value);
    float& get_OffsetTraceRadius();
    float& get_OffsetTraceOriginHeight();
    bool get_bKeepAnchorAboveNavSurface();
    void set_bKeepAnchorAboveNavSurface(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
