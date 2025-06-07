#include "..\FUObjectArray.hpp"
#include "AkSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AkAudio::AkSettings::get_MaxSimultaneousReverbVolumes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AkAudio::AkSettings::get_WwiseProjectPath() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AkAudio::AkSettings::get_WwiseSoundBankFolder() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_AkAudio::AkSettings::get_bAutoConnectToWAAPI() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_AkAudio::AkSettings::get_bEnableMultiCoreRendering() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkSettings::set_bAutoConnectToWAAPI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AkAudio::AkSettings::set_bEnableMultiCoreRendering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkSettings::get_DefaultOcclusionCollisionChannel() {
    return (void*)((uintptr_t)this + 0x52);
}
void* _Script_AkAudio::AkSettings::get_WwiseWindowsInstallationPath() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AkAudio::AkSettings::get_WwiseMacInstallationPath() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkSettings");
    return result;
}
