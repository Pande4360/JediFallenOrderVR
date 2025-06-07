#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "OnlinePIESettings.hpp"
bool _Script_OnlineSubsystemUtils::OnlinePIESettings::get_bOnlinePIEEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::OnlinePIESettings::set_bOnlinePIEEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OnlineSubsystemUtils::OnlinePIESettings::get_Logins() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlinePIESettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlinePIESettings");
    return result;
}
