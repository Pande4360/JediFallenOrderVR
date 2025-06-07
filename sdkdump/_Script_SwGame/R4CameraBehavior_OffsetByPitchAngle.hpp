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
struct R4CameraBehavior_OffsetByPitchAngle : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x170]; public:
    void* get_OffsetToModify();
    bool get_bModifyX();
    void set_bModifyX(bool value);
    bool get_bModifyY();
    void set_bModifyY(bool value);
    bool get_bModifyZ();
    void set_bModifyZ(bool value);
    void* get_XOffsetCurve();
    void* get_YOffsetCurve();
    void* get_ZOffsetCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
