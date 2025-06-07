#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsOffenseComponent.hpp"
#include "SwProjectile.hpp"
#include "SwProjectileSpreadingData.hpp"
#include "SwRangedOffenseBaseComponent.hpp"
_Script_SwGame::SwProjectileSpreadingData*& _Script_SwGame::SwRangedOffenseBaseComponent::get_AccurateSpreadingData() {
    return *(_Script_SwGame::SwProjectileSpreadingData**)((uintptr_t)this + 0x180);
}
int32_t& _Script_SwGame::SwRangedOffenseBaseComponent::get_OffScreenShotsNum() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
int32_t& _Script_SwGame::SwRangedOffenseBaseComponent::get_MissingShotsNum() {
    return *(int32_t*)((uintptr_t)this + 0x174);
}
_Script_SwGame::SwProjectileSpreadingData*& _Script_SwGame::SwRangedOffenseBaseComponent::get_MissedSpreadingData() {
    return *(_Script_SwGame::SwProjectileSpreadingData**)((uintptr_t)this + 0x188);
}
int32_t& _Script_SwGame::SwRangedOffenseBaseComponent::get_AccurateShotsNum() {
    return *(int32_t*)((uintptr_t)this + 0x178);
}
_Script_SwGame::SwProjectile* _Script_SwGame::SwRangedOffenseBaseComponent::SpawnAIProjectile(void* ProjectileClass, _Script_RsGameTechRT::RsAICharacter* Shooter, _Script_Engine::SceneComponent* MuzzleComponent, void* AccuracyOverrideMode) {
    return;
}
_Script_SwGame::SwProjectileSpreadingData*& _Script_SwGame::SwRangedOffenseBaseComponent::get_ExtendedMissedSpreadingData() {
    return *(_Script_SwGame::SwProjectileSpreadingData**)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRangedOffenseBaseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwRangedOffenseBaseComponent");
    return result;
}
void _Script_SwGame::SwRangedOffenseBaseComponent::RestartShotAccuracyCycle() {
    return;
}
bool _Script_SwGame::SwRangedOffenseBaseComponent::IsFriendlyBlockingLOS(_Script_Engine::SceneComponent* MuzzleComponent) {
    return;
}
void* _Script_SwGame::SwRangedOffenseBaseComponent::GetAccuracyCycleStateDebugString() {
    return;
}
bool _Script_SwGame::SwRangedOffenseBaseComponent::CheckAttackTargetWithinShootingCone(float AngleInDegree, bool bIgnoreTargetElevation, _Script_Engine::SceneComponent* OverrideAimTransform) {
    return;
}
