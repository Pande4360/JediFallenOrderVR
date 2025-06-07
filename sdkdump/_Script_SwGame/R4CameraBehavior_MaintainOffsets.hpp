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
struct R4CameraBehavior_MaintainOffsets : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x50]; public:
    bool get_bMaintainCameraSpaceOffsets();
    void set_bMaintainCameraSpaceOffsets(bool value);
    bool get_bMaintainWorldSpaceOffsets();
    void set_bMaintainWorldSpaceOffsets(bool value);
    bool get_bSkipHorizontalOffset();
    void set_bSkipHorizontalOffset(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
