#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DockTabStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::DockTabStyle::get_ForegroundBrush() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Script_SlateCore::DockTabStyle::get_CloseButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::DockTabStyle::get_HoveredBrush() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Script_SlateCore::DockTabStyle::get_NormalBrush() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_SlateCore::DockTabStyle::get_ActiveBrush() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_SlateCore::DockTabStyle::get_ColorOverlayTabBrush() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_SlateCore::DockTabStyle::get_ContentAreaBrush() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Script_SlateCore::DockTabStyle::get_ColorOverlayIconBrush() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Script_SlateCore::DockTabStyle::get_TabWellBrush() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Script_SlateCore::DockTabStyle::get_TabPadding() {
    return (void*)((uintptr_t)this + 0x6c0);
}
float& _Script_SlateCore::DockTabStyle::get_OverlapWidth() {
    return *(float*)((uintptr_t)this + 0x6d0);
}
void* _Script_SlateCore::DockTabStyle::get_FlashColor() {
    return (void*)((uintptr_t)this + 0x6d8);
}
_Script_CoreUObject::Class* _Script_SlateCore::DockTabStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.DockTabStyle");
    return result;
}
