#include "..\FUObjectArray.hpp"
#include "Void_World_C.hpp"
#include "..\_Game_Models_Void_Void_World_BP_VoidWorldBranches\BP_VoidWorldBranches_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DecalActor.hpp"
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\SkyLight.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_LevelSequence\LevelSequenceActor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
void* _Game_Levels_Void_Void_World::Void_World_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Game_Levels_Void_Void_World::Void_World_C::get_Timeline_1_Reveal_844C46FA434FFA550C800BB455A62289() {
    return *(float*)((uintptr_t)this + 0x370);
}
void _Game_Levels_Void_Void_World::Void_World_C::set_In_The_Void(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere57_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x500);
}
bool _Game_Levels_Void_Void_World::Void_World_C::get_In_The_Void() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Game_Levels_Void_Void_World::Void_World_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere60_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4c8);
}
void* _Game_Levels_Void_Void_World::Void_World_C::get_Timeline_1__Direction_844C46FA434FFA550C800BB455A62289() {
    return (void*)((uintptr_t)this + 0x374);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Levels_Void_Void_World::Void_World_C::get_saveStar() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x388);
}
void _Game_Levels_Void_Void_World::Void_World_C::Timeline_1__FinishedFunc() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Levels_Void_Void_World::Void_World_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Levels_Void_Void_World::Void_World_C::get_SkillBranches() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x390);
}
bool _Game_Levels_Void_Void_World::Void_World_C::get_IsSkillPurchased() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
_Script_Engine::DecalActor*& _Game_Levels_Void_Void_World::Void_World_C::get_M_Save_Decal_Void_2_ExecuteUbergraph_Void_World_RefProperty() {
    return *(_Script_Engine::DecalActor**)((uintptr_t)this + 0x3f8);
}
void _Game_Levels_Void_Void_World::Void_World_C::set_IsSkillPurchased(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_Void_Void_World::Void_World_C::get_UpgradeFlag() {
    return (void*)((uintptr_t)this + 0x399);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere59_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4b0);
}
void* _Game_Levels_Void_Void_World::Void_World_C::get_SkillSpheres() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_LevelSequence::LevelSequenceActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Void_Save_Lights_01_ExecuteUbergraph_Void_World_RefProperty() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::SkyLight*& _Game_Levels_Void_Void_World::Void_World_C::get_voidworld_Skylight_ExecuteUbergraph_Void_World_RefProperty() {
    return *(_Script_Engine::SkyLight**)((uintptr_t)this + 0x400);
}
_Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C*& _Game_Levels_Void_Void_World::Void_World_C::get_BP_VoidWorldBranches_ExecuteUbergraph_Void_World_RefProperty() {
    return *(_Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C**)((uintptr_t)this + 0x408);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere80_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x430);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere63_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x410);
}
void _Game_Levels_Void_Void_World::Void_World_C::BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere78_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x418);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere79_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x420);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere69_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x488);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere77_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x428);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere10_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x438);
}
void _Game_Levels_Void_Void_World::Void_World_C::ExecuteUbergraph_Void_World(int32_t EntryPoint) {
    return;
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere49_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x440);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere48_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x448);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere70_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x450);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere73_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x468);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere68_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x458);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere51_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x490);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere72_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x460);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere17_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x470);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere18_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x478);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere75_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x480);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere67_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x498);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere66_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4a0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere61_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4a8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere74_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere81_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere58_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere62_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4c0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere64_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4d0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere65_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere50_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere46_1_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere56_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x508);
}
_Script_Engine::StaticMeshActor*& _Game_Levels_Void_Void_World::Void_World_C::get_Sphere22_EdGraph_0_RefProperty() {
    return *(_Script_Engine::StaticMeshActor**)((uintptr_t)this + 0x510);
}
_Script_CoreUObject::Class* _Game_Levels_Void_Void_World::Void_World_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Void/Void_World.Void_World_C");
    return result;
}
void _Game_Levels_Void_Void_World::Void_World_C::HandleSphereVisibility() {
    return;
}
void _Game_Levels_Void_Void_World::Void_World_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Levels_Void_Void_World::Void_World_C::BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Levels_Void_Void_World::Void_World_C::HandleHeroUpgradeChanged(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldUpgradeFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewUpgradeFlags) {
    return;
}
void _Game_Levels_Void_Void_World::Void_World_C::ReceiveLevelVisible0() {
    return;
}
