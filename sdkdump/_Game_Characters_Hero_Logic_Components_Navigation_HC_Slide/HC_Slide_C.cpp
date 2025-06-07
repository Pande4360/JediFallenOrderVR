#include "..\FUObjectArray.hpp"
#include "HC_Slide_C.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_slideUpHillTumbling() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::set_slideLand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_PhysicalAnimationOperationParameters() {
    return (void*)((uintptr_t)this + 0x198);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_slideLand() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::set_slideUpHillTumbling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_SlideSpeed() {
    return (void*)((uintptr_t)this + 0x190);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideStateExited(void* NewState, void* PrevState) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_CurrentSlideSpeed() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_AkAudio::AkComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_AkComponent_SFX_Slide() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x1b0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::EndSlideUphillTumbleEnter(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::get_ParticleComponent() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Slide.HC_Slide_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::EndEffects() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::StartEffects() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideUphillTumble(_Script_CoreUObject::Vector Rotation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideStateEntered(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::EndSlideRumble() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::EndSlideUphillTumbleExit(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::GroundStateEntered(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideEnablePhysicalAnimation() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideDisablePhysicalAnimation() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideRumble() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::StartSlideSpeed(void* NewSpeed) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideEnter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::ResetSlideSpeed() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::SlideWalkBackDownExit(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C::ExecuteUbergraph_HC_Slide(int32_t EntryPoint) {
    return;
}
