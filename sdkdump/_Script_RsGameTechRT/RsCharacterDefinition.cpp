#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "RsAISoundEvents.hpp"
#include "RsCharacterDeathDefinition.hpp"
#include "RsCharacterDefinition.hpp"
#include "RsCharacterReactionDefinition.hpp"
#include "RsDefenseDefinition.hpp"
#include "RsHitCountTrackingDefinition.hpp"
#include "RsPhysicsAssetCustomization.hpp"
#include "RsRagdollSoundEvents.hpp"
float& _Script_RsGameTechRT::RsCharacterDefinition::get_JogSpeed() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_DamageValues() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_EvadeDuringReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0xdf + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsCharacterReactionDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_ReactionDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterReactionDefinition**)((uintptr_t)this + 0x88);
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_BlockMeterResetOnDepletedDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCharacterDeathDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_DeathDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterDeathDefinition**)((uintptr_t)this + 0x78);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_DamageReceiveMultiplier() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_BlockDepleteValues() {
    return *(float*)((uintptr_t)this + 0x60);
}
_Script_RsGameTechRT::RsCharacterDeathDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_AirDeathDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterDeathDefinition**)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCharacterDefinition");
    return result;
}
_Script_RsGameTechRT::RsCharacterReactionDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_AirReactionDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterReactionDefinition**)((uintptr_t)this + 0x90);
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_EvadeDuringReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdf + 0);
    *(uint8_t*)((uintptr_t)this + 0xdf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsHitCountTrackingDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_HitCountTrackingDefinition() {
    return *(_Script_RsGameTechRT::RsHitCountTrackingDefinition**)((uintptr_t)this + 0x98);
}
_Script_RsGameTechRT::RsDefenseDefinition*& _Script_RsGameTechRT::RsCharacterDefinition::get_DefenseDefinition() {
    return *(_Script_RsGameTechRT::RsDefenseDefinition**)((uintptr_t)this + 0xa0);
}
int32_t& _Script_RsGameTechRT::RsCharacterDefinition::get_ParriedBlockCountIncrement() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_CanBlock() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_BlockConditions() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_ParryConditions() {
    return (void*)((uintptr_t)this + 0xd0);
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_CanBlock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_BlockMeterResetOnDepletedDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_BlockDuringReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_BlockDuringReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_Follow() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c1 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_ParryDuringReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0xde + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_ParryDuringReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xde + 0);
    *(uint8_t*)((uintptr_t)this + 0xde + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_CanParry() {
    return (*(uint8_t*)((uintptr_t)this + 0xe1 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_CanParry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsCharacterDefinition::get_FootstepEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1b0);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_CanEvade() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_WeaponIkWeaponOtherEndSocket() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_CanEvade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_BlockResponse() {
    return (void*)((uintptr_t)this + 0xe3);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_DefenseMap() {
    return (void*)((uintptr_t)this + 0xe6);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_DefenseContactMap() {
    return (void*)((uintptr_t)this + 0xf7);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_GlancingBlowDistance() {
    return *(float*)((uintptr_t)this + 0x108);
}
_Script_RsGameTechRT::RsAISoundEvents*& _Script_RsGameTechRT::RsCharacterDefinition::get_AISoundEvents() {
    return *(_Script_RsGameTechRT::RsAISoundEvents**)((uintptr_t)this + 0x110);
}
_Script_RsGameTechRT::RsRagdollSoundEvents*& _Script_RsGameTechRT::RsCharacterDefinition::get_RagdollSoundEvents() {
    return *(_Script_RsGameTechRT::RsRagdollSoundEvents**)((uintptr_t)this + 0x118);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_SurfaceTypeOverrides() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_RsGameTechRT::RsPhysicsAssetCustomization*& _Script_RsGameTechRT::RsCharacterDefinition::get_PhysicsAssetCustomization() {
    return *(_Script_RsGameTechRT::RsPhysicsAssetCustomization**)((uintptr_t)this + 0x170);
}
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsCharacterDefinition::get_FootstepDataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x178);
}
_Script_Engine::DataTable*& _Script_RsGameTechRT::RsCharacterDefinition::get_SlideDataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x180);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_HitFXColor() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_TrailSocketStart() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_TrailSocketEnd() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_Engine::ParticleSystem*& _Script_RsGameTechRT::RsCharacterDefinition::get_TrailParticle() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x1a8);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_CapsulePercentageForTargetAim() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsCharacterDefinition::get_FoliageFootstepEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1b8);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_TargetAimUpperThreshold() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_Follow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_FoliageTypeUpdateRate() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_FoliageTypeSearchRadius() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
void* _Script_RsGameTechRT::RsCharacterDefinition::get_WeaponIkWeaponEndSocket() {
    return (void*)((uintptr_t)this + 0x1d8);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_DistanceToCancelActiveFightBehaviorIfTargetIsInSync() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
bool _Script_RsGameTechRT::RsCharacterDefinition::get_bUseCapsulePercentage() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ec + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacterDefinition::set_bUseCapsulePercentage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_TargetAimLowerThreshold() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_RsGameTechRT::RsCharacterDefinition::get_TargetAimPitchYawTimeout() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
