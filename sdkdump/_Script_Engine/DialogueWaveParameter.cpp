#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueWave.hpp"
#include "DialogueWaveParameter.hpp"
_Script_Engine::DialogueWave*& _Script_Engine::DialogueWaveParameter::get_DialogueWave() {
    return *(_Script_Engine::DialogueWave**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DialogueWaveParameter::get_Context() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DialogueWaveParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DialogueWaveParameter");
    return result;
}
