#include "..\FUObjectArray.hpp"
#include "Amb_Trigger_Sphere_Linked_C.hpp"
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Script_AkAudio\AkAmbientSound.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
void* _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_Comp_SW_Amb_Overlap() {
    return *(_Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::ArrowComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::StaticMeshComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_StopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3d0);
}
_Script_Engine::SphereComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::TextRenderComponent*& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x3c0);
}
float& _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_OcclusionInterpolationRate() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
bool _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::get_IsDoOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x3dc + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::set_IsDoOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Amb/Amb_Trigger_Sphere_Linked.Amb_Trigger_Sphere_Linked_C");
    return result;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::UserConstructionScript() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_0_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::BndEvt__Comp_SW_Amb_Overlap_K2Node_ComponentBoundEvent_1_RsOnOverlapHeroDelegate__DelegateSignature() {
    return;
}
void _Game_Audio_Blueprint_Amb_Amb_Trigger_Sphere_Linked::Amb_Trigger_Sphere_Linked_C::ExecuteUbergraph_Amb_Trigger_Sphere_Linked(int32_t EntryPoint) {
    return;
}
