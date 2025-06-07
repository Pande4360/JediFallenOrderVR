#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelSlot.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SafeZoneSlot : public PanelSlot {
    private: char pad_38[0x28]; public:
    bool get_bIsTitleSafe();
    void set_bIsTitleSafe(bool value);
    void* get_SafeAreaScale();
    void* get_HAlign();
    void* get_VAlign();
    void* get_Padding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
