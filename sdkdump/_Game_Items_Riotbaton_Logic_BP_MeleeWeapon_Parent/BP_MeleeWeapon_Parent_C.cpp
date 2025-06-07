#include "..\FUObjectArray.hpp"
#include "BP_MeleeWeapon_Parent_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_SFX_Weapon_Idle_Loop_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x388);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_MeleeWeapon() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x368);
}
int32_t& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_Audio_Interp_Rate() {
    return *(int32_t*)((uintptr_t)this + 0x394);
}
_Script_Engine::ParticleSystemComponent*& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_Weapon_Idle_VFX() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x370);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_SFX_Weapon_Idle_Loop_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x380);
}
_Script_AkAudio::AkComponent*& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_Weapon_Idle_AkComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x378);
}
float& _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_Max_Relative_Velocity() {
    return *(float*)((uintptr_t)this + 0x390);
}
bool _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_ShouldPlayMeleeStrikingSaberVFX() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void* _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_RTPC_Actor_MeleeWeapon_BlockBreak() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::set_ShouldPlayMeleeStrikingSaberVFX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::get_ExtendWeapon() {
    return (*(uint8_t*)((uintptr_t)this + 0x399 + 0)) & 1 != 0;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::set_ExtendWeapon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x399 + 0);
    *(uint8_t*)((uintptr_t)this + 0x399 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Items/Riotbaton/Logic/BP_MeleeWeapon_Parent.BP_MeleeWeapon_Parent_C");
    return result;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::CosmeticEffects(bool Enabled, _Script_AkAudio::AkComponent* AkComponent, _Script_AkAudio::AkAudioEvent* AkEventStart, _Script_AkAudio::AkAudioEvent* AkEventStop, _Script_Engine::SceneComponent* VFX_Idle) {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::UserConstructionScript0() {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::BatonOn(bool Off) {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::OnDiedEvent(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::BatonOff() {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::WeaponActivate(bool ActivateWeapon, _Script_AkAudio::AkAudioEvent* SFX_Weapon_Idle_Loop_Start, _Script_AkAudio::AkAudioEvent* SFX_Weapon_Idle_Loop_Stop) {
    return;
}
void _Game_Items_Riotbaton_Logic_BP_MeleeWeapon_Parent::BP_MeleeWeapon_Parent_C::ExecuteUbergraph_BP_MeleeWeapon_Parent(int32_t EntryPoint) {
    return;
}
