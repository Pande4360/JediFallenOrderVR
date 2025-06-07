#include "..\FUObjectArray.hpp"
#include "BP_TriggerLight_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SkyLight.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
void* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Enter_Scattering_Intensity_Scale() {
    return *(float*)((uintptr_t)this + 0x378);
}
bool _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Enter_Visibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::set_Use_End_Overlap_Trigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37c + 0);
    *(uint8_t*)((uintptr_t)this + 0x37c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::set_Enter_Visibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Enter_Light_Intensity_Scale() {
    return *(float*)((uintptr_t)this + 0x374);
}
bool _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Restore_Initial_Values() {
    return (*(uint8_t*)((uintptr_t)this + 0x37d + 0)) & 1 != 0;
}
bool _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Use_End_Overlap_Trigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x37c + 0)) & 1 != 0;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::set_Restore_Initial_Values(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37d + 0);
    *(uint8_t*)((uintptr_t)this + 0x37d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Exit_Visibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x37e + 0)) & 1 != 0;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::set_Exit_Visibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37e + 0);
    *(uint8_t*)((uintptr_t)this + 0x37e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Exit_Light_Intensity() {
    return *(float*)((uintptr_t)this + 0x380);
}
float& _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Exit_Scattering_Intensity() {
    return *(float*)((uintptr_t)this + 0x384);
}
void* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Lights() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_Engine::SkyLight*& _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_SkyLight() {
    return *(_Script_Engine::SkyLight**)((uintptr_t)this + 0x398);
}
void* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Initial_Visibility() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Initial_Light_Intensities() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::get_Initial_Scattering_Intensities() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Lighting/LightingBlueprints/BP_TriggerLight.BP_TriggerLight_C");
    return result;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::UserConstructionScript() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::ReceiveBeginPlay() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::CE_ResetDoOnce() {
    return;
}
void _Game_Lighting_LightingBlueprints_BP_TriggerLight::BP_TriggerLight_C::ExecuteUbergraph_BP_TriggerLight(int32_t EntryPoint) {
    return;
}
