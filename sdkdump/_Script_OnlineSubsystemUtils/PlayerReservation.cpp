#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlayerReservation.hpp"
void* _Script_OnlineSubsystemUtils::PlayerReservation::get_UniqueId() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PlayerReservation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.PlayerReservation");
    return result;
}
void* _Script_OnlineSubsystemUtils::PlayerReservation::get_ValidationStr() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_OnlineSubsystemUtils::PlayerReservation::get_bAllowCrossplay() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_OnlineSubsystemUtils::PlayerReservation::get_Platform() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_OnlineSubsystemUtils::PlayerReservation::set_bAllowCrossplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_OnlineSubsystemUtils::PlayerReservation::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0x4c);
}
