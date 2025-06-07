#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSignificanceSettingsInfo.hpp"
void _Script_SignificanceManager::RsSignificanceSettingsInfo::set_bDisableManaging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SignificanceManager::RsSignificanceSettingsInfo::get_bDisableManaging() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_SignificanceManager::RsSignificanceSettingsInfo::get_MaxInstancesAtMedium() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SignificanceManager::RsSignificanceSettingsInfo::get_MinSignificanceForHigh() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_SignificanceManager::RsSignificanceSettingsInfo::get_MaxInstancesAtHigh() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SignificanceManager::RsSignificanceSettingsInfo::get_MinDistToAllowCulling() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_SignificanceManager::RsSignificanceSettingsInfo::get_MinSignificanceForMedium() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SignificanceManager::RsSignificanceSettingsInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SignificanceManager.RsSignificanceSettingsInfo");
    return result;
}
