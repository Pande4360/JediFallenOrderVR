#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MenuAnchor : public ContentWidget {
    private: char pad_118[0x40]; public:
    void* get_MenuClass();
    void* get_OnGetMenuContentEvent();
    void* get_Placement();
    bool get_ShouldDeferPaintingAfterWindowContent();
    void set_ShouldDeferPaintingAfterWindowContent(bool value);
    bool get_UseApplicationMenuStack();
    void set_UseApplicationMenuStack(bool value);
    void* get_OnMenuOpenChanged();
    static _Script_CoreUObject::Class* static_class();
    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    _Script_CoreUObject::Vector2D GetMenuPosition();
    void Close();
}; // Size: 0x158
#pragma pack(pop)
}
