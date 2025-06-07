#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PanelSlot.hpp"
#include "SafeZoneSlot.hpp"
bool _Script_UMG::SafeZoneSlot::get_bIsTitleSafe() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_UMG::SafeZoneSlot::set_bIsTitleSafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::SafeZoneSlot::get_SafeAreaScale() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_UMG::SafeZoneSlot::get_HAlign() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_UMG::SafeZoneSlot::get_VAlign() {
    return (void*)((uintptr_t)this + 0x4d);
}
void* _Script_UMG::SafeZoneSlot::get_Padding() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_UMG::SafeZoneSlot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SafeZoneSlot");
    return result;
}
