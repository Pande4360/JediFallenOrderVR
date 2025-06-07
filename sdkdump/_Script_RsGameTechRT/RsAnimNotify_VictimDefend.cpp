#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_VictimDefend.hpp"
void* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_AttackDirection() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_bAllowDefendingWeaponIk() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_bManuallySetCollisionParts() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_DefenseType() {
    return (void*)((uintptr_t)this + 0x39);
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_Offset() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_OffsetEnd() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_Radius() {
    return *(float*)((uintptr_t)this + 0x54);
}
void _Script_RsGameTechRT::RsAnimNotify_VictimDefend::set_bAllowDefendingWeaponIk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAnimNotify_VictimDefend::set_bManuallySetCollisionParts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::get_CollisionParts() {
    return (void*)((uintptr_t)this + 0x5a);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_VictimDefend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_VictimDefend");
    return result;
}
