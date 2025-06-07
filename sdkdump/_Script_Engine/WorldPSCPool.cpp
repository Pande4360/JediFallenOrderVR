#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WorldPSCPool.hpp"
void* _Script_Engine::WorldPSCPool::get_WorldParticleSystemPools() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::WorldPSCPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WorldPSCPool");
    return result;
}
