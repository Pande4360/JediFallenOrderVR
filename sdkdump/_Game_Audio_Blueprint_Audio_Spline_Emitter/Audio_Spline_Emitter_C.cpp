#include "..\FUObjectArray.hpp"
#include "Audio_Spline_Emitter_C.hpp"
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
_Script_Engine::SceneComponent*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x380);
}
void* _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Comp_SW_Amb_Overlap() {
    return *(_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C**)((uintptr_t)this + 0x368);
}
_Script_AkAudio::AkComponent*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Ak() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SplineComponent*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x378);
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::set_Audio_Debug_Sphere_And_Distance_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Start_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x388);
}
bool _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Audio_Debug_Sphere_And_Distance_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
_Script_Engine::StaticMesh*& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x398);
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_1_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
float& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Occlusion_Interpolation_Rate() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
int32_t& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_CinematicCounter() {
    return *(int32_t*)((uintptr_t)this + 0x3b0);
}
void* _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_Location() {
    return (void*)((uintptr_t)this + 0x3a4);
}
bool _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_IsInCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b4 + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::set_IsInCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::get_InterpSpeed() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Audio_Spline_Emitter.Audio_Spline_Emitter_C");
    return result;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::UserConstructionScript0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_0_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::CustomEvent_0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::LVL_CinematicEnded_Event_0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::OnOverlapHeroBegin_Event_0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::OnOverlapHeroEnd_Event_0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Audio_Blueprint_Audio_Spline_Emitter::Audio_Spline_Emitter_C::ExecuteUbergraph_Audio_Spline_Emitter(int32_t EntryPoint) {
    return;
}
