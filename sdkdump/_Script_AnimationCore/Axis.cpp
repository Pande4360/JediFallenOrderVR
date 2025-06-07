#include "..\FUObjectArray.hpp"
#include "Axis.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::Axis::get_Axis() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_AnimationCore::Axis::get_bInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_AnimationCore::Axis::set_bInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::Axis::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.Axis");
    return result;
}
