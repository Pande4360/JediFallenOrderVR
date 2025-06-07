#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Matrix.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "RsConstrainedJumpWeights.hpp"
#include "RsHeroComponent.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsJumpComponent.hpp"
#include "RsJumpSettings.hpp"
bool _Script_RsGameTechRT::RsJumpComponent::TryWallJump() {
    return;
}
_Script_RsGameTechRT::RsJumpSettings*& _Script_RsGameTechRT::RsJumpComponent::get_JumpSettings() {
    return *(_Script_RsGameTechRT::RsJumpSettings**)((uintptr_t)this + 0x180);
}
bool _Script_RsGameTechRT::RsJumpComponent::TryJumpInDirection(_Script_CoreUObject::Vector4 JumpDirection) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsJumpComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsJumpComponent");
    return result;
}
bool _Script_RsGameTechRT::RsJumpComponent::TryZTargetDoubleJump() {
    return;
}
bool _Script_RsGameTechRT::RsJumpComponent::TryWallJumpWithWallNormal(_Script_CoreUObject::Vector& WallNormal) {
    return;
}
bool _Script_RsGameTechRT::RsJumpComponent::TryJump() {
    return;
}
bool _Script_RsGameTechRT::RsJumpComponent::TryDoubleJump() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::SetConstrainedJumpVelocityModifier(float NewModifier) {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::ResetDoubleJump() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::ResetConstrainedJumpVelocityModifier() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::OnJumpAscend() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::OnJumpApex() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::OnConstrainedJumpFinished(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier) {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::JumpAscend() {
    return;
}
void _Script_RsGameTechRT::RsJumpComponent::JumpApex() {
    return;
}
bool _Script_RsGameTechRT::RsJumpComponent::DoConstrainedJumpInDirection(void* JumpDirection, _Script_CoreUObject::Matrix JumpSpace, _Script_CoreUObject::Vector CurrentMovementVelocity, _Script_Engine::AnimMontage* JumpMontage) {
    return;
}
bool _Script_RsGameTechRT::RsJumpComponent::DoConstrainedJump(_Script_RsGameTechRT::RsConstrainedJumpWeights& jumpWeights, _Script_CoreUObject::Matrix JumpSpace, _Script_CoreUObject::Vector CurrentMovementVelocity, _Script_Engine::AnimMontage* JumpMontage) {
    return;
}
