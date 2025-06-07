#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsDevNetSettings.hpp"
void* _Script_RsDevNetRT::RsDevNetSettings::get_ProjectName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_BuildName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_DevNetHostname() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_DevNetPort() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_DevNetIP() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_RsDevNetRT::RsDevNetSettings::get_DisableScreenshots() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d + 0)) & 1 != 0;
}
bool _Script_RsDevNetRT::RsDevNetSettings::get_DisableDevnet() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void _Script_RsDevNetRT::RsDevNetSettings::set_DisableDevnet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_Whitelist() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_RsDevNetRT::RsDevNetSettings::set_DisableScreenshots(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsDevNetRT::RsDevNetSettings::get_DebounceErrors() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e + 0)) & 1 != 0;
}
void _Script_RsDevNetRT::RsDevNetSettings::set_DebounceErrors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsDevNetRT::RsDevNetSettings::get_DebounceTimer() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_RsDevNetRT::RsDevNetSettings::get_WhitelistedErrorsOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_RsDevNetRT::RsDevNetSettings::set_WhitelistedErrorsOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsDevNetRT::RsDevNetSettings::get_AskToReport() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_RsDevNetRT::RsDevNetSettings::set_AskToReport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsDevNetRT::RsDevNetSettings::get_ErrorFilterList() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_RsDevNetRT::RsDevNetSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsDevNetRT.RsDevNetSettings");
    return result;
}
