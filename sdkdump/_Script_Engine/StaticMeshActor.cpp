#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "StaticMeshActor.hpp"
#include "StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Script_Engine::StaticMeshActor::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
bool _Script_Engine::StaticMeshActor::get_bStaticMeshReplicateMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMeshActor::set_bStaticMeshReplicateMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticMeshActor::get_NavigationGeometryGatheringMode() {
    return (void*)((uintptr_t)this + 0x369);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMeshActor");
    return result;
}
void _Script_Engine::StaticMeshActor::SetMobility(void* InMobility) {
    return;
}
