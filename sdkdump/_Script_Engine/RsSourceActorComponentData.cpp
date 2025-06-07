#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSourceActorComponentData.hpp"
#include "StaticMeshComponent.hpp"
void* _Script_Engine::RsSourceActorComponentData::get_ActorLabel() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsSourceActorComponentData::get_FolderName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::RsSourceActorComponentData::get_SourceMeshArrayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
_Script_Engine::StaticMeshComponent*& _Script_Engine::RsSourceActorComponentData::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RsSourceActorComponentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsSourceActorComponentData");
    return result;
}
void* _Script_Engine::RsSourceActorComponentData::get_GroupGuid() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::RsSourceActorComponentData::get_InstanceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::RsSourceActorComponentData::get_SourceMeshIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::RsSourceActorComponentData::get_DestinationMeshIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
