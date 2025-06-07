#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIkAnimInstanceState.hpp"
void _Script_RsGameTechRT::RsIkAnimInstanceState::set_bAllowDefendingWeaponIk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsIkAnimInstanceState::get_Modifiers() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsIkAnimInstanceState::get_LastUsedHitCollider() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIkAnimInstanceState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsIkAnimInstanceState");
    return result;
}
bool _Script_RsGameTechRT::RsIkAnimInstanceState::get_bAllowDefendingWeaponIk() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
