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
struct R4CameraBehavior_Offset : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x58]; public:
    void* get_LocationOffsetWS();
    void* get_LocationOffsetVTS();
    void* get_LocationOffsetCS();
    void* get_LocationOffsetCSYawOnly();
    void* get_RotationOffsetWS();
    void* get_RotationOffsetCS();
    void* get_FocusLocationOffset();
    bool get_bOffsetZToViewTargetHeight();
    void set_bOffsetZToViewTargetHeight(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
