#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ArrowComponent : public PrimitiveComponent {
    private: char pad_b30[0x10]; public:
    void* get_ArrowColor();
    float& get_ArrowSize();
    bool get_bIsScreenSizeScaled();
    void set_bIsScreenSizeScaled(bool value);
    float& get_ScreenSize();
    bool get_bTreatAsASprite();
    void set_bTreatAsASprite(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetArrowColor(_Script_CoreUObject::LinearColor NewColor);
}; // Size: 0xb40
#pragma pack(pop)
}
