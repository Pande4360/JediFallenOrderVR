#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DialogueVoice.hpp"
void* _Script_Engine::DialogueVoice::get_Plurality() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_Engine::DialogueVoice::get_Gender() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::DialogueVoice::get_LocalizationGUID() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::DialogueVoice::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DialogueVoice");
    return result;
}
