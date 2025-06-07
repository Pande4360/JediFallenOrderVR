#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "SwAIBuddyDroid.hpp"
#include "SwButtonMashComponent.hpp"
#include "SwDefenseParameters.hpp"
#include "SwHero.hpp"
#include "SwReactionState.hpp"
#include "SwSaberClashComponent.hpp"
float& _Script_SwGame::SwHero::get_ConsecutiveProjectileDamageProtectionTime() {
    return *(float*)((uintptr_t)this + 0x2ea0);
}
_Script_SwGame::SwAIBuddyDroid* _Script_SwGame::SwHero::GetBuddyDroidActor() {
    return;
}
int32_t& _Script_SwGame::SwHero::get_CurrentTargetingProfileIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2ea4);
}
void _Script_SwGame::SwHero::PlayerReaction(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwReactionState* DescriptionTemplate) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwHero::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwHero");
    return result;
}
_Script_SwGame::SwButtonMashComponent*& _Script_SwGame::SwHero::get_ButtonMashComponent() {
    return *(_Script_SwGame::SwButtonMashComponent**)((uintptr_t)this + 0x2ea8);
}
void _Script_SwGame::SwHero::PlayerDefendFromDefenseParameters(_Script_SwGame::SwDefenseParameters& DefenseParameters) {
    return;
}
_Script_SwGame::SwSaberClashComponent*& _Script_SwGame::SwHero::get_SaberClashComponent() {
    return *(_Script_SwGame::SwSaberClashComponent**)((uintptr_t)this + 0x2eb0);
}
void _Script_SwGame::SwHero::SetTargetingProfileIndex(int32_t NewIndex) {
    return;
}
void _Script_SwGame::SwHero::PlayerDefend(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, void* DescriptionOverride) {
    return;
}
void _Script_SwGame::SwHero::PlayerAttackSync(void* DescriptionOverride, _Script_RsGameTechRT::RsSyncDefinition* SyncDef, bool bSwapMasterSlave) {
    return;
}
void _Script_SwGame::SwHero::PlayerAttack(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, void* DescriptionOverride) {
    return;
}
bool _Script_SwGame::SwHero::HasAnyProjectileDamageProtection() {
    return;
}
_Script_SwGame::SwSaberClashComponent* _Script_SwGame::SwHero::GetSaberClashComponent() {
    return;
}
void _Script_SwGame::SwHero::DetermineSoftLockTargetFromProfile() {
    return;
}
void _Script_SwGame::SwHero::DeactiveForceMissingOnIncomingProjectiles() {
    return;
}
void _Script_SwGame::SwHero::AutoActivateZTargeting(_Script_Engine::Actor* AutoTarget) {
    return;
}
void _Script_SwGame::SwHero::ActiveForceMissingOnIncomingProjectiles(float ChanceToMiss) {
    return;
}
