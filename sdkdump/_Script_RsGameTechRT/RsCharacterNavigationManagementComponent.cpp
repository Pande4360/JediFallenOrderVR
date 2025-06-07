#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterNavigationManagementComponent.hpp"
#include "RsHeroComponent.hpp"
void _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::TriggerTransition(void* targetNavComponent) {
    return;
}
void* _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::get_ConstraintBoneName() {
    return (void*)((uintptr_t)this + 0x180);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCharacterNavigationManagementComponent");
    return result;
}
void _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::UpdateTransitionProgression(float Progression) {
    return;
}
bool _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::TrySetNavState(void* navState, bool forceNavStateChange, void* navStateChangeTag) {
    return;
}
bool _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::ResetToBestNavState(bool forceNavStateChange, void* navStateChangeTag) {
    return;
}
void _Script_RsGameTechRT::RsCharacterNavigationManagementComponent::OnHeroStateChanged(void* NewState, void* PrevState) {
    return;
}
