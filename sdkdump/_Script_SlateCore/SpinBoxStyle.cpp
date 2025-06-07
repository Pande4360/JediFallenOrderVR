#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "SpinBoxStyle.hpp"
void* _Script_SlateCore::SpinBoxStyle::get_BackgroundBrush() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SpinBoxStyle::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_SlateCore::SpinBoxStyle::get_HoveredBackgroundBrush() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SlateCore::SpinBoxStyle::get_ActiveFillBrush() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_SlateCore::SpinBoxStyle::get_InactiveFillBrush() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Script_SlateCore::SpinBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SpinBoxStyle");
    return result;
}
void* _Script_SlateCore::SpinBoxStyle::get_ArrowsImage() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_SlateCore::SpinBoxStyle::get_TextPadding() {
    return (void*)((uintptr_t)this + 0x2d8);
}
