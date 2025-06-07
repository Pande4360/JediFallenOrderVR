#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ScaleBox : public ContentWidget {
    private: char pad_118[0x20]; public:
    void* get_Stretch();
    void* get_StretchDirection();
    float& get_UserSpecifiedScale();
    bool get_IgnoreInheritedScale();
    void set_IgnoreInheritedScale(bool value);
    bool get_bSingleLayoutPass();
    void set_bSingleLayoutPass(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetUserSpecifiedScale(float InUserSpecifiedScale);
    void SetStretchDirection(void* InStretchDirection);
    void SetStretch(void* InStretch);
    void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
}; // Size: 0x138
#pragma pack(pop)
}
