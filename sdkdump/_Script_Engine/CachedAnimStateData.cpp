#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedAnimStateData.hpp"
void* _Script_Engine::CachedAnimStateData::get_StateName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CachedAnimStateData::get_StateMachineName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CachedAnimStateData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedAnimStateData");
    return result;
}
