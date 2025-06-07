#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "BP_ForceEcho_Base_C.hpp"
#include "..\_Game_UI_Debug_UI_MessageText\UI_MessageText_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\DecalComponent.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapCollectableComponent.hpp"
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::FadeFX__UpdateFunc() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Echo_Environment_Mesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::PointLightComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Force_Echo_Light_01() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x4b0);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::FadeFX__FinishedFunc() {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_VFX_Void() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::DecalComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Ground_Decal() {
    return *(_Script_Engine::DecalComponent**)((uintptr_t)this + 0x4b8);
}
_Script_RsGameTechRT::RsWorldMapCollectableComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_RsWorldMapCollectable() {
    return *(_Script_RsGameTechRT::RsWorldMapCollectableComponent**)((uintptr_t)this + 0x4c0);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::OrientToEcho() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NarrativeLabelComponent() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x4c8);
}
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x4d0);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Orient__Direction_26A605A64B9D9A1DD93163B2B4230DC7() {
    return (void*)((uintptr_t)this + 0x4e8);
}
_Script_Engine::TimelineComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Orient() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4f0);
}
float& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_FadeFX_Fade_88A2BF604706767D4A5D8A981CCD90E6() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_FadeFX__Direction_88A2BF604706767D4A5D8A981CCD90E6() {
    return (void*)((uintptr_t)this + 0x4fc);
}
_Script_Engine::TimelineComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_FadeFX() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x500);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor) {
    return;
}
float& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Timeline_0_NewTrack_0_4D8784EC490BE73AD51C1AB6DCE972E7() {
    return *(float*)((uintptr_t)this + 0x508);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Timeline_0__Direction_4D8784EC490BE73AD51C1AB6DCE972E7() {
    return (void*)((uintptr_t)this + 0x50c);
}
_Script_Engine::TimelineComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x510);
}
_Script_Engine::StaticMesh*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Echo_Static_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x518);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::LVL_HideEcho() {
    return;
}
_Game_UI_Debug_UI_MessageText::UI_MessageText_C*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Echo_DataBank_Widget() {
    return *(_Game_UI_Debug_UI_MessageText::UI_MessageText_C**)((uintptr_t)this + 0x520);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::GetNarrativeLabelHiddenInGame(bool& Hidden) {
    return;
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Dialogue_and_Gameplay_Tag_Override() {
    return (void*)((uintptr_t)this + 0x528);
}
_Script_Engine::ParticleSystem*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Echo_VFX_Particle_Override() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x548);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Temp_text_color() {
    return (void*)((uintptr_t)this + 0x550);
}
_Script_Engine::StaticMesh*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Echo_Hologram_Pose_Mesh_Override() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x558);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::UserConstructionScript0() {
    return;
}
_Script_Engine::ParticleSystem*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_P_ConsumeEcho_VFX() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x560);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Temp_Explanation_text_post_echo() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_AkAudio::AkAudioEvent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Audio_ambient_start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x580);
}
_Script_AkAudio::AkAudioEvent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Audio_ambient_stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x588);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_LVL_EchoDone() {
    return (void*)((uintptr_t)this + 0x590);
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::LVL_ShowEcho() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NewVar_0_0() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x5a0);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NarrativeLabel() {
    return (void*)((uintptr_t)this + 0x5a8);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NarrativeLabelOffset() {
    return (void*)((uintptr_t)this + 0x5b8);
}
bool _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NarrativeLabelHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c4 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ScriptedAnimStop() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::set_NarrativeLabelHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_NarrativeLabelColor() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_EchoUnlockableTag() {
    return (void*)((uintptr_t)this + 0x5d0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_DynmaicMaterialInstance() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x5d8);
}
void* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Hero_Interact_Echo_Animation() {
    return (void*)((uintptr_t)this + 0x5e0);
}
float& _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::get_Light_Intensity() {
    return *(float*)((uintptr_t)this + 0x5e4);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_ForceEcho_Base.BP_ForceEcho_Base_C");
    return result;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::GetNarrativeLabel(void*& Label) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::GetNarrativeLabelColor(_Script_CoreUObject::Color& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ShouldAllowInteract__OverrideMe(bool& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::Orient__FinishedFunc() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::Orient__UpdateFunc() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ScriptedAnimEnd() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ToggleNarrativeLabel() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::Echo_ConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ScriptedAnimBinding() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ScriptedAnimNotify(void* NotifyName) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ForceEcho_AnimStarted() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::VO_FailSafe() {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::ExecuteUbergraph_BP_ForceEcho_Base(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Interactables_BP_ForceEcho_Base::BP_ForceEcho_Base_C::LVL_EchoDone__DelegateSignature() {
    return;
}
