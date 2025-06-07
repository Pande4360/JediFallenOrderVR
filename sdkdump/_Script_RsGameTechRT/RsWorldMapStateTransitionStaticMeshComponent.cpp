#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsWorldMapStateTransitionStaticMeshComponent.hpp"
void* _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent::get_ClassToSpawn() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapStateTransitionStaticMeshComponent");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent::BroadcastSetState(int32_t State) {
    return;
}
