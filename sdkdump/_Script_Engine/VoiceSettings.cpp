#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneComponent.hpp"
#include "SoundAttenuation.hpp"
#include "SoundEffectSourcePresetChain.hpp"
#include "VoiceSettings.hpp"
_Script_Engine::SceneComponent*& _Script_Engine::VoiceSettings::get_ComponentToAttachTo() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundAttenuation*& _Script_Engine::VoiceSettings::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x8);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_Engine::VoiceSettings::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::VoiceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VoiceSettings");
    return result;
}
