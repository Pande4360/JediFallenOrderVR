#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_UMG\ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkCheckBox : public _Script_UMG::ContentWidget {
    private: char pad_118[0x948]; public:
    void* get_CheckedState();
    void* get_CheckedStateDelegate();
    void* get_WidgetStyle();
    void* get_HorizontalAlignment();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_ThePropertyToControl();
    void* get_ItemToControl();
    void* get_AkOnCheckStateChanged();
    void* get_OnItemDropped();
    void* get_OnPropertyDropped();
    static _Script_CoreUObject::Class* static_class();
    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(void* InCheckedState);
    void SetAkItemId(_Script_CoreUObject::Guid& ItemId);
    void SetAkBoolProperty(void* ItemProperty);
    bool IsPressed();
    bool IsChecked();
    void* GetCheckedState();
    void* GetAkProperty();
    _Script_CoreUObject::Guid GetAkItemId();
}; // Size: 0xa60
#pragma pack(pop)
}
