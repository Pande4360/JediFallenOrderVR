#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "MaterialInterface.hpp"
#include "PhysicsAsset.hpp"
#include "SkeletalMesh.hpp"
#include "SkeletalMeshActor.hpp"
#include "SkeletalMeshComponent.hpp"
bool _Script_Engine::SkeletalMeshActor::get_bShouldDoAnimNotifies() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMeshActor::set_bShouldDoAnimNotifies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMesh*& _Script_Engine::SkeletalMeshActor::get_ReplicatedMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x378);
}
void _Script_Engine::SkeletalMeshActor::set_bWakeOnLevelStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SkeletalMeshActor::OnRep_ReplicatedMaterial0() {
    return;
}
bool _Script_Engine::SkeletalMeshActor::get_bWakeOnLevelStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Script_Engine::SkeletalMeshActor::get_SkeletalMeshComponent() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::PhysicsAsset*& _Script_Engine::SkeletalMeshActor::get_ReplicatedPhysAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x380);
}
_Script_Engine::MaterialInterface*& _Script_Engine::SkeletalMeshActor::get_ReplicatedMaterial0() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x388);
}
_Script_Engine::MaterialInterface*& _Script_Engine::SkeletalMeshActor::get_ReplicatedMaterial1() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshActor");
    return result;
}
void _Script_Engine::SkeletalMeshActor::OnRep_ReplicatedPhysAsset() {
    return;
}
void _Script_Engine::SkeletalMeshActor::OnRep_ReplicatedMesh() {
    return;
}
void _Script_Engine::SkeletalMeshActor::OnRep_ReplicatedMaterial1() {
    return;
}
