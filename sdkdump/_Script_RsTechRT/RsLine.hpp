#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsLine : public _Script_UMG::Widget {
    private: char pad_100[0x48]; public:
    float& get_Thickness();
    void* get_ThicknessDelegate();
    void* get_FillColorAndOpacity();
    void* get_FillColorAndOpacityDelegate();
    static _Script_CoreUObject::Class* static_class();
    void SetThickness(float InThickness);
    void SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor);
}; // Size: 0x148
#pragma pack(pop)
}
