#include "..\FUObjectArray.hpp"
#include "AkSettingsPerUser.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
bool _Script_AkAudio::AkSettingsPerUser::get_SuppressWwiseProjectPathWarnings() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_AkAudio::AkSettingsPerUser::get_WwiseWindowsInstallationPath() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AkAudio::AkSettingsPerUser::get_WwiseMacInstallationPath() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_AkAudio::AkSettingsPerUser::set_SuppressWwiseProjectPathWarnings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSettingsPerUser::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSettingsPerUser");
    return result;
}
