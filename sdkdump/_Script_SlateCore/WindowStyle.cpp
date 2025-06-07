#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "WindowStyle.hpp"
void* _Script_SlateCore::WindowStyle::get_CloseButtonStyle() {
    return (void*)((uintptr_t)this + 0x770);
}
void* _Script_SlateCore::WindowStyle::get_MinimizeButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::WindowStyle::get_MaximizeButtonStyle() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_SlateCore::WindowStyle::get_RestoreButtonStyle() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Script_SlateCore::WindowStyle::get_FlashTitleBrush() {
    return (void*)((uintptr_t)this + 0xce8);
}
void* _Script_SlateCore::WindowStyle::get_TitleTextStyle() {
    return (void*)((uintptr_t)this + 0x9e8);
}
void* _Script_SlateCore::WindowStyle::get_InactiveTitleBrush() {
    return (void*)((uintptr_t)this + 0xc60);
}
void* _Script_SlateCore::WindowStyle::get_ActiveTitleBrush() {
    return (void*)((uintptr_t)this + 0xbd8);
}
void* _Script_SlateCore::WindowStyle::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0xd70);
}
void* _Script_SlateCore::WindowStyle::get_OutlineBrush() {
    return (void*)((uintptr_t)this + 0xd98);
}
void* _Script_SlateCore::WindowStyle::get_OutlineColor() {
    return (void*)((uintptr_t)this + 0xe20);
}
void* _Script_SlateCore::WindowStyle::get_BorderBrush() {
    return (void*)((uintptr_t)this + 0xe48);
}
void* _Script_SlateCore::WindowStyle::get_BackgroundBrush() {
    return (void*)((uintptr_t)this + 0xed0);
}
void* _Script_SlateCore::WindowStyle::get_ChildBackgroundBrush() {
    return (void*)((uintptr_t)this + 0xf58);
}
_Script_CoreUObject::Class* _Script_SlateCore::WindowStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.WindowStyle");
    return result;
}
