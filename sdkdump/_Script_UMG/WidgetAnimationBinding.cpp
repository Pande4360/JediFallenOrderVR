#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WidgetAnimationBinding.hpp"
void* _Script_UMG::WidgetAnimationBinding::get_WidgetName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::WidgetAnimationBinding::get_SlotWidgetName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimationBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.WidgetAnimationBinding");
    return result;
}
void _Script_UMG::WidgetAnimationBinding::set_bIsRootWidget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetAnimationBinding::get_bIsRootWidget() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetAnimationBinding::get_AnimationGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
