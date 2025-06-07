#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedAnimTransitionData.hpp"
_Script_CoreUObject::Class* _Script_Engine::CachedAnimTransitionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedAnimTransitionData");
    return result;
}
void* _Script_Engine::CachedAnimTransitionData::get_StateMachineName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CachedAnimTransitionData::get_FromStateName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CachedAnimTransitionData::get_ToStateName() {
    return (void*)((uintptr_t)this + 0x10);
}
