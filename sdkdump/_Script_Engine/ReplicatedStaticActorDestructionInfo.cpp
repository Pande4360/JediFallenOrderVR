#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReplicatedStaticActorDestructionInfo.hpp"
void* _Script_Engine::ReplicatedStaticActorDestructionInfo::get_ObjClass() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::ReplicatedStaticActorDestructionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ReplicatedStaticActorDestructionInfo");
    return result;
}
