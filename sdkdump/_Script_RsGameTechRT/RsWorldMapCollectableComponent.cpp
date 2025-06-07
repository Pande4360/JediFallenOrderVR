#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsWorldMapCollectableComponent.hpp"
void* _Script_RsGameTechRT::RsWorldMapCollectableComponent::get_CollectableType() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapCollectableComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapCollectableComponent");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapCollectableComponent::BroadcastCollectableAcquired() {
    return;
}
