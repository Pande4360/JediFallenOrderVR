#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueContext.hpp"
#include "DialogueVoice.hpp"
_Script_Engine::DialogueVoice*& _Script_Engine::DialogueContext::get_Speaker() {
    return *(_Script_Engine::DialogueVoice**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::DialogueContext::get_Targets() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::DialogueContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DialogueContext");
    return result;
}
