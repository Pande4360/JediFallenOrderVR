#include "..\FUObjectArray.hpp"
#include "Amb_Trigger_Volume_C.hpp"
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Script_AkAudio\AkAmbientSound.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "..\_Script_InputCore\Key.hpp"
_Script_Engine::TextRenderComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_Audio_Trigger_Volume() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::ArrowComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x3b0);
}
void* _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Script_Engine::Volume*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_Volume() {
    return *(_Script_Engine::Volume**)((uintptr_t)this + 0x3d0);
}
_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_Comp_SW_Amb_Overlap() {
    return *(_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C**)((uintptr_t)this + 0x3a8);
}
float& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_OcclusionInterpolationRate() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_StopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::StaticMeshComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_Audio_Trigger_Volume_Mesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c0);
}
bool _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::get_IsDoOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::set_IsDoOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Amb/Amb_Trigger_Volume.Amb_Trigger_Volume_C");
    return result;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::UserConstructionScript() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::OnClicked_Event_0(_Script_Engine::Actor* TouchedActor, _Script_InputCore::Key ButtonPressed) {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_2_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_3_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Volume::Amb_Trigger_Volume_C::ExecuteUbergraph_Amb_Trigger_Volume(int32_t EntryPoint) {
    return;
}
