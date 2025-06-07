#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLimbInfo.hpp"
void* _Script_RsGameTechRT::RsLimbInfo::get_LimbTag() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsLimbInfo::get_LimbColliders() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsLimbInfo::get_LimbBone() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_RsGameTechRT::RsLimbInfo::set_bAllowDamageAfterDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsLimbInfo::get_StartingHealth() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_RsGameTechRT::RsLimbInfo::get_bAllowDamageAfterDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsLimbInfo::get_bAlsoDamageParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsLimbInfo::set_bAlsoDamageParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsLimbInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsLimbInfo");
    return result;
}
