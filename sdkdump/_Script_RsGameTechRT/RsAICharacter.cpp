#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAICharacter.hpp"
#include "RsAISpawner.hpp"
#include "RsCharacter.hpp"
#include "RsNavVolume.hpp"
void _Script_RsGameTechRT::RsAICharacter::SetClampToNavMesh_BluePrint(bool Clamp) {
    return;
}
_Script_Engine::SceneComponent*& _Script_RsGameTechRT::RsAICharacter::get_AlwaysUpdateTransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x28e0);
}
bool _Script_RsGameTechRT::RsAICharacter::get_bDontSetDeathCollisionTweak() {
    return (*(uint8_t*)((uintptr_t)this + 0x28e8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAICharacter::set_bDontSetDeathCollisionTweak(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAICharacter::set_bEnableRagdoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29a0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_RsGameTechRT::RsAICharacter::OnNotifyAISpawned(_Script_RsGameTechRT::RsAISpawner* Spawner) {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::get_bIsDismembered() {
    return (*(uint8_t*)((uintptr_t)this + 0x28ec + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsAICharacter::get_bEnableRagdoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x29a0 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAICharacter::set_bIsDismembered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x28ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAICharacter");
    return result;
}
int32_t& _Script_RsGameTechRT::RsAICharacter::get_NumberOfAiSpawnedOnDeath() {
    return *(int32_t*)((uintptr_t)this + 0x28f0);
}
bool _Script_RsGameTechRT::RsAICharacter::get_bKillOnEnterWater() {
    return (*(uint8_t*)((uintptr_t)this + 0x29a0 + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsAICharacter::PlaceOnNavMeshOnHitGroundEvent_Internal(void* previousMode, void* newMode, float Proximity) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::set_bKillOnEnterWater(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29a0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_RsGameTechRT::RsAICharacter::SetWeaponUnsheathed(bool bIsUnsheathed) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::SetCanBeKilledByWater(bool bEnable) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::OnBeforeKillingAIWhenEnteredWater() {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::SetAIToBusy(bool bIsBusy) {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::PlaceOnNavMesh_Blueprint(_Script_CoreUObject::Vector& extentMargin) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::OnTopologyChangedPrivate(void* previousMode, void* newMode, float Proximity) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::OnRequestAmbientToAlertDialogue(_Script_Engine::Actor* Source, void* AwarenessKind, void* ReactionRole) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::OnRequestAlertToAmbientDialogue() {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::CanPlayAnimSequenceOnNavMesh(_Script_Engine::AnimSequence* Animation) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::OnPostDeath() {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::IsWeaponUnsheathed() {
    return;
}
_Script_GameplayTags::GameplayTag _Script_RsGameTechRT::RsAICharacter::GetSpeakerTagOverride() {
    return;
}
_Script_CoreUObject::Transform _Script_RsGameTechRT::RsAICharacter::GetSpawnTransform() {
    return;
}
_Script_RsGameTechRT::RsAISpawner* _Script_RsGameTechRT::RsAICharacter::GetSpawner() {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::GetCanBeKilledByWater() {
    return;
}
bool _Script_RsGameTechRT::RsAICharacter::CanPlayMontageOnNavMesh(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_RsGameTechRT::RsAICharacter::AICharacterIsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* RsCharacter, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsAICharacterInWater, bool bWasInWater) {
    return;
}
