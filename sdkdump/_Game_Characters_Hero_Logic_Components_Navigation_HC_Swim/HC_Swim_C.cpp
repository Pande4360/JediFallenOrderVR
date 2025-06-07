#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_AB_Hero\AB_Hero_C.hpp"
#include "HC_Swim_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_SwGame\SwSwimComponent.hpp"
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_InCinematicSwim() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_storedNav() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_Sound_Underwater_State_Deactivate() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x248);
}
_Script_Engine::AnimMontage*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_Montage_Swim_Boost() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x230);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::DisableCinematicSwim() {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_WaterDripFX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_Breather_FX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x288);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_IsUnderwater() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::set_IsUnderwater(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::SwimBoost() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_Sound_Underwater_State_Activate() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x240);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_L_Hand_FX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_R_Hand_FX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_L_Foot_FX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_R_Foot_FX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Object*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_L_Hand_Deform() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Object*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_R_Hand_Deform() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x280);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::ExecuteUbergraph_HC_Swim(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_StartSwimming() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_StopSwimming() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::set_InCinematicSwim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshActor*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::get_breather() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Swim.HC_Swim_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::ShowBreather(bool Visibility) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::Swim_Shallow_Water_Enter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::Swim_Shallow_Water_Exit() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::SwimStateEnter(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::OnSwimStateChanged(void* previousSwimState, void* newSwimState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::SwimStateExit(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::EnableCinematicSwim() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::StopSwimming__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C::StartSwimming__DelegateSignature() {
    return;
}
