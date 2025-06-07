#include "..\FUObjectArray.hpp"
#include "FilterOptionPerAxis.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimationCore::FilterOptionPerAxis::get_bX() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_AnimationCore::FilterOptionPerAxis::get_bY() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_AnimationCore::FilterOptionPerAxis::set_bX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimationCore::FilterOptionPerAxis::set_bY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimationCore::FilterOptionPerAxis::get_bZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_AnimationCore::FilterOptionPerAxis::set_bZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::FilterOptionPerAxis::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.FilterOptionPerAxis");
    return result;
}
