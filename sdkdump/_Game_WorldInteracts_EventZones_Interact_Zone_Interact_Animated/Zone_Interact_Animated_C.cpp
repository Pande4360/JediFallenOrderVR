#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe\HC_Sheathe_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "Zone_Interact_Animated_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_RsGameTechRT\RsSlaveSyncInstance.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_PoweredActors() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_Engine::AnimSequence*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_PlayerAnimation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x420);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_AnimationSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x440);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x428);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_LVL_InteractAnimationCompleted() {
    return (void*)((uintptr_t)this + 0x430);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_SheatheSaberFirst() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::set_SheatheSaberFirst(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_CurrentlyPowered() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::InteractSyncAnim() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::set_CurrentlyPowered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSlaveSyncInstance*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_SyncInstance() {
    return *(_Script_RsGameTechRT::RsSlaveSyncInstance**)((uintptr_t)this + 0x468);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_HC_Sheathe() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C**)((uintptr_t)this + 0x470);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_LVL_InteractAnimationStarted() {
    return (void*)((uintptr_t)this + 0x478);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_LVL_InteractAnimationAborted() {
    return (void*)((uintptr_t)this + 0x488);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_IgnoreNextInterrupt() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::set_IgnoreNextInterrupt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_ReenableOnAnimInterrupted() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::set_ReenableOnAnimInterrupted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::get_SoloAnimMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x4a0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::PlaySyncAnim() {
    return;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Interact/Zone_Interact_Animated.Zone_Interact_Animated_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::AnimatedSheathe(bool Solo) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::PlaySFX() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::UpdatePoweredActors(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::Interacted0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::SyncEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::InteractSoloAnim() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::CheckDoneSheathing() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::LVL_InteractAnimationStarted__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::ContinueInteractSyncAnim() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::SoloSheatheDone() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::SyncSheatheDone() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::SyncStopped(bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::ExecuteUbergraph_Zone_Interact_Animated(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::LVL_InteractAnimationAborted__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C::LVL_InteractAnimationCompleted__DelegateSignature() {
    return;
}
