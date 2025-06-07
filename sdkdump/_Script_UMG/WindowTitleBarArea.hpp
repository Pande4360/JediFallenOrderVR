#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Margin.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WindowTitleBarArea : public ContentWidget {
    private: char pad_118[0x20]; public:
    bool get_bWindowButtonsEnabled();
    void set_bWindowButtonsEnabled(bool value);
    bool get_bDoubleClickTogglesFullscreen();
    void set_bDoubleClickTogglesFullscreen(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
}; // Size: 0x138
#pragma pack(pop)
}
