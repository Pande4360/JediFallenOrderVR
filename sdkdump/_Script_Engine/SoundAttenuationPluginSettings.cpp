#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundAttenuationPluginSettings.hpp"
void* _Script_Engine::SoundAttenuationPluginSettings::get_SpatializationPluginSettingsArray() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundAttenuationPluginSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundAttenuationPluginSettings");
    return result;
}
void* _Script_Engine::SoundAttenuationPluginSettings::get_OcclusionPluginSettingsArray() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::SoundAttenuationPluginSettings::get_ReverbPluginSettingsArray() {
    return (void*)((uintptr_t)this + 0x20);
}
