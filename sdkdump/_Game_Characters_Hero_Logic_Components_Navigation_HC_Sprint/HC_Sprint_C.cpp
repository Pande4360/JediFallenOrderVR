#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Sprint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::get_HeroSprint() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::get_HeroSprintStop() {
    return (void*)((uintptr_t)this + 0x1a0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::get_sprintCameraStickThreshold() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Sprint.HC_Sprint_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::SprintInput() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::SprintStop(bool PauseOnly) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::OnGroundEntered(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::OnGroundExited(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::Action_SprintRelease() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::On_Combat_State_Changed(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::PushSprintCameras() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::Duration(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::ExecuteUbergraph_HC_Sprint(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::HeroSprintStop__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C::HeroSprint__DelegateSignature() {
    return;
}
