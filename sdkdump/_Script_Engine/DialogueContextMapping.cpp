#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueContextMapping.hpp"
#include "DialogueSoundWaveProxy.hpp"
#include "SoundWave.hpp"
void* _Script_Engine::DialogueContextMapping::get_Context() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundWave*& _Script_Engine::DialogueContextMapping::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x18);
}
void* _Script_Engine::DialogueContextMapping::get_LocalizationKeyFormat() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Engine::DialogueSoundWaveProxy*& _Script_Engine::DialogueContextMapping::get_Proxy() {
    return *(_Script_Engine::DialogueSoundWaveProxy**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::DialogueContextMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DialogueContextMapping");
    return result;
}
