#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsHealthComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHealthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHealthComponent");
    return result;
}
void* _Script_RsGameTechRT::RsHealthComponent::get_OnDiedEvent_Internal() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_RsGameTechRT::RsHealthComponent::get_OnDiedEvent() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_RsGameTechRT::RsHealthComponent::get_OnPostDeathEvent() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_RsGameTechRT::RsHealthComponent::get_OnRevivedEvent() {
    return (void*)((uintptr_t)this + 0x1a0);
}
float& _Script_RsGameTechRT::RsHealthComponent::get_MaxHealth() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
