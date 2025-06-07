#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterAnimationData.hpp"
#include "RsCombatState.hpp"
#include "RsDamageParams.hpp"
#include "RsSoftStateObject.hpp"
#include "RsSyncDefinition.hpp"
#include "RsSyncInstance.hpp"
void* _Script_RsGameTechRT::RsCombatState::get_InstancedAnimData() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_RsGameTechRT::RsCombatState::set_bHasTakeDamageImplementation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_RsGameTechRT::RsCombatState::get_ActiveSyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0xe0);
}
bool _Script_RsGameTechRT::RsCombatState::get_bHasTakeDamageImplementation() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCombatState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCombatState");
    return result;
}
void _Script_RsGameTechRT::RsCombatState::PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::SetStopAnimOnAbort(bool StopAnimOnAbort) {
    return;
}
bool _Script_RsGameTechRT::RsCombatState::RsShouldTakeDamage(_Script_RsGameTechRT::RsCharacter* DamageTaker, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::OverrideSyncData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsSyncDefinition* CurrentSyncDefinition, _Script_Engine::Actor* CurrentMaster, void*& CurrentSlaves, _Script_RsGameTechRT::RsSyncDefinition*& NewSyncDefinition, _Script_Engine::Actor*& NewMaster, void*& NewSlaves) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::CancelThisAction() {
    return;
}
void _Script_RsGameTechRT::RsCombatState::OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::OnTakeDamage(_Script_RsGameTechRT::RsCharacter* TheDefender, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::OnActionAnimationEnded(_Script_RsGameTechRT::RsCharacter* ActionOwner) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::CompleteThisActionButContinueAnimation() {
    return;
}
void _Script_RsGameTechRT::RsCombatState::CompleteThisAction() {
    return;
}
void _Script_RsGameTechRT::RsCombatState::ChainToSyncAnimation(_Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, void*& Slaves, _Script_Engine::AnimationAsset* OverrideAnimation, int32_t& NewSyncGroupdID, _Script_RsGameTechRT::RsSyncInstance*& MasterInstance, void*& SlaveInstanceArray, _Script_CoreUObject::Vector2D& MasterBlendSpaceInput, void*& SlaveBlendSpaceinputs) {
    return;
}
_Script_Engine::AnimMontage* _Script_RsGameTechRT::RsCombatState::ChainAnimation(_Script_RsGameTechRT::RsCharacterAnimationData& InAnimData) {
    return;
}
void _Script_RsGameTechRT::RsCombatState::CancelThisActionButContinueAnimation() {
    return;
}
