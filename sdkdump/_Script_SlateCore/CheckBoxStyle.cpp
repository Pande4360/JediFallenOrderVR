#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CheckBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::CheckBoxStyle::get_CheckBoxType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedImage() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedImage() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedPressedImage() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedPressedImage() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedHoveredImage() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedHoveredImage() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedImage() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedHoveredImage() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedPressedImage() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_SlateCore::CheckBoxStyle::get_Padding() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_SlateCore::CheckBoxStyle::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_SlateCore::CheckBoxStyle::get_BorderBackgroundColor() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedSlateSound() {
    return (void*)((uintptr_t)this + 0x538);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedSlateSound() {
    return (void*)((uintptr_t)this + 0x550);
}
void* _Script_SlateCore::CheckBoxStyle::get_HoveredSlateSound() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_CoreUObject::Class* _Script_SlateCore::CheckBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CheckBoxStyle");
    return result;
}
