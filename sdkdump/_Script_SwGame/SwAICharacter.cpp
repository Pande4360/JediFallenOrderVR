#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "SwAICharacter.hpp"
#include "SwAttackState.hpp"
#include "SwDefenseParameters.hpp"
#include "SwDefenseState.hpp"
#include "SwProjectile.hpp"
#include "SwReactionState.hpp"
void* _Script_SwGame::SwAICharacter::get_AttackRowName() {
    return (void*)((uintptr_t)this + 0x29a8);
}
void _Script_SwGame::SwAICharacter::AIDefendForDefenseType(_Script_RsGameTechRT::RsCharacter* Attacker, void* DefenseType) {
    return;
}
void _Script_SwGame::SwAICharacter::AIReaction(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwReactionState* DescriptionTemplate) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAICharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAICharacter");
    return result;
}
void _Script_SwGame::SwAICharacter::OnShotProjectileReflected(_Script_SwGame::SwProjectile* Projectile, _Script_RsGameTechRT::RsCharacter* ReflectionInstigator) {
    return;
}
void _Script_SwGame::SwAICharacter::K2_ReactionParried(_Script_Engine::HitResult& HitSweep, void* AttackType, _Script_Engine::AnimSequenceBase* ParryReactionOverride) {
    return;
}
void* _Script_SwGame::SwAICharacter::GetCurrentAttackRow() {
    return;
}
void _Script_SwGame::SwAICharacter::AIDefendFromDefenseParameters(_Script_SwGame::SwDefenseParameters& DefenseParameters) {
    return;
}
void _Script_SwGame::SwAICharacter::AIDefend(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwDefenseState* DescriptionTemplate, void* CombatDefenseType) {
    return;
}
void _Script_SwGame::SwAICharacter::AIAttackSync(_Script_SwGame::SwAttackState* DescriptionTemplate, _Script_RsGameTechRT::RsSyncDefinition* SyncDef, bool bSwapMasterSlave) {
    return;
}
void _Script_SwGame::SwAICharacter::AIAttack(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwAttackState* DescriptionTemplate) {
    return;
}
