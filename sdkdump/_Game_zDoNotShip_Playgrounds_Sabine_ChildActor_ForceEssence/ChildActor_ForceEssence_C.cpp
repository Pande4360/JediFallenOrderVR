#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base\BPFX_MeterUpgrade_Base_C.hpp"
#include "..\_Game_UI_Items_UI_AcquireText\UI_AcquireText_C.hpp"
#include "ChildActor_ForceEssence_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ParticleSystemComponent*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_UpgradeCenter() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SceneComponent*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
void* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_Triggered() {
    return (void*)((uintptr_t)this + 0x380);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_PlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x3e0);
}
bool _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_UpgradeType() {
    return (void*)((uintptr_t)this + 0x391);
}
void* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_SecondaryText() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::UserConstructionScript0() {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x3b0);
}
_Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_UpgradeFX() {
    return *(_Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C**)((uintptr_t)this + 0x3b8);
}
_Game_UI_Items_UI_AcquireText::UI_AcquireText_C*& _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_AcquireWidget() {
    return *(_Game_UI_Items_UI_AcquireText::UI_AcquireText_C**)((uintptr_t)this + 0x3d8);
}
void* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_TitleText() {
    return (void*)((uintptr_t)this + 0x3c0);
}
bool _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::get_upgraded() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::set_upgraded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/zDoNotShip/Playgrounds/Sabine/ChildActor_ForceEssence.ChildActor_ForceEssence_C");
    return result;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::ReceiveBeginPlay0() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::AwardCeremonyAndUI() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::EchoConsumed() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::OnResume() {
    return;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::ExecuteUbergraph_ChildActor_ForceEssence(int32_t EntryPoint) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence::ChildActor_ForceEssence_C::Triggered__DelegateSignature() {
    return;
}
