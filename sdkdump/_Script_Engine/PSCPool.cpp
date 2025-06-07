#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PSCPool.hpp"
void* _Script_Engine::PSCPool::get_FreeElements() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PSCPool::get_InUseComponents_Manual() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::PSCPool::get_InUseComponents_Auto() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::PSCPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PSCPool");
    return result;
}
