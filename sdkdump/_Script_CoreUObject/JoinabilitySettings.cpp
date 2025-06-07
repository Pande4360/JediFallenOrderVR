#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "JoinabilitySettings.hpp"
void _Script_CoreUObject::JoinabilitySettings::set_bPublicSearchable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CoreUObject::JoinabilitySettings::get_SessionName() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_CoreUObject::JoinabilitySettings::get_bJoinViaPresenceFriendsOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
bool _Script_CoreUObject::JoinabilitySettings::get_bPublicSearchable() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_CoreUObject::JoinabilitySettings::set_bAllowInvites(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CoreUObject::JoinabilitySettings::get_bAllowInvites() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
int32_t& _Script_CoreUObject::JoinabilitySettings::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
bool _Script_CoreUObject::JoinabilitySettings::get_bJoinViaPresence() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_CoreUObject::JoinabilitySettings::set_bJoinViaPresence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_CoreUObject::JoinabilitySettings::set_bJoinViaPresenceFriendsOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_CoreUObject::JoinabilitySettings::get_MaxPartySize() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_CoreUObject::JoinabilitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.JoinabilitySettings");
    return result;
}
