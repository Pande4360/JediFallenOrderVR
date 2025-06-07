#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ComboBox : public Widget {
    private: char pad_100[0x38]; public:
    void* get_Items();
    void* get_OnGenerateWidgetEvent();
    bool get_bIsFocusable();
    void set_bIsFocusable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
