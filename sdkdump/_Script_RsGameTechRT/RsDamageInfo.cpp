#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDamageInfo.hpp"
void* _Script_RsGameTechRT::RsDamageInfo::get_DamageTypeClass() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsDamageInfo::get_Damage() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsDamageInfo::get_DamageCauser() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsDamageInfo::get_LastTimeHit() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_RsGameTechRT::RsDamageInfo::set_PlayDirectionalDamageReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsDamageInfo::get_PlayDirectionalDamageReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsDamageInfo::get_DamageInstigator() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsDamageInfo::get_DamageParams() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsDamageInfo::get_DamageEffectType() {
    return (void*)((uintptr_t)this + 0x158);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageInfo");
    return result;
}
