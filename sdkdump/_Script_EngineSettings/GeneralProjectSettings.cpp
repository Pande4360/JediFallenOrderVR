#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeneralProjectSettings.hpp"
bool _Script_EngineSettings::GeneralProjectSettings::get_bStartInVR() {
    return (*(uint8_t*)((uintptr_t)this + 0x10a + 0)) & 1 != 0;
}
void* _Script_EngineSettings::GeneralProjectSettings::get_CompanyName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_ProjectID() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bSupportAR() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 1 != 0;
}
void* _Script_EngineSettings::GeneralProjectSettings::get_LicensingTerms() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_CompanyDistinguishedName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_PrivacyPolicy() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_CopyrightNotice() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_Description() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_Homepage() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_ProjectName() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_ProjectVersion() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_SupportContact() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_ProjectDisplayedTitle() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_EngineSettings::GeneralProjectSettings::get_ProjectDebugTitleInfo() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bShouldWindowPreserveAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bShouldWindowPreserveAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bUseBorderlessWindow() {
    return (*(uint8_t*)((uintptr_t)this + 0x109 + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bUseBorderlessWindow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x109 + 0);
    *(uint8_t*)((uintptr_t)this + 0x109 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_EngineSettings::GeneralProjectSettings::set_bStartInVR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10a + 0);
    *(uint8_t*)((uintptr_t)this + 0x10a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bStartInAR() {
    return (*(uint8_t*)((uintptr_t)this + 0x10b + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bStartInAR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10b + 0);
    *(uint8_t*)((uintptr_t)this + 0x10b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_EngineSettings::GeneralProjectSettings::set_bSupportAR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bAllowWindowResize() {
    return (*(uint8_t*)((uintptr_t)this + 0x10d + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bAllowWindowResize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10d + 0);
    *(uint8_t*)((uintptr_t)this + 0x10d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bAllowClose() {
    return (*(uint8_t*)((uintptr_t)this + 0x10e + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bAllowClose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10e + 0);
    *(uint8_t*)((uintptr_t)this + 0x10e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bAllowMaximize() {
    return (*(uint8_t*)((uintptr_t)this + 0x10f + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bAllowMaximize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10f + 0);
    *(uint8_t*)((uintptr_t)this + 0x10f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_EngineSettings::GeneralProjectSettings::get_bAllowMinimize() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_EngineSettings::GeneralProjectSettings::set_bAllowMinimize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_EngineSettings::GeneralProjectSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EngineSettings.GeneralProjectSettings");
    return result;
}
