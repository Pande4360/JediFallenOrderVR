#include "..\FUObjectArray.hpp"
#include "BP_Hologram_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_SwGame\SwHologramBase.hpp"
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_AudioTrack() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x980);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_Top() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x938);
}
void* _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x910);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_Holo() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x920);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x918);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_P_Hologram_Light() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x928);
}
_Script_Engine::SkeletalMeshComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Character() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x930);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Audio_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x9a0);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_Eye() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x940);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_Rim() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x948);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_FillLow() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x950);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_SpotLight_Key() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x958);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Character&LightingSetup() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x960);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_HologramBase_01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x968);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_HoloLightEffects() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x970);
}
bool _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_HoloIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x978 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::set_HoloIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x978 + 0);
    *(uint8_t*)((uintptr_t)this + 0x978 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Infinite() {
    return (*(uint8_t*)((uintptr_t)this + 0x988 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::ExecuteUbergraph_BP_Hologram(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::set_Infinite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x988 + 0);
    *(uint8_t*)((uintptr_t)this + 0x988 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::HologramDeactivated0() {
    return;
}
float& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_PlayDuration() {
    return *(float*)((uintptr_t)this + 0x98c);
}
float& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_LightIntensityMultiplier() {
    return *(float*)((uintptr_t)this + 0x990);
}
float& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_HoloLightsScale() {
    return *(float*)((uintptr_t)this + 0x994);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Audio_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x998);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Audio_End() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x9a8);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::get_Audio_Loop_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x9b0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Hologram/BP_Hologram.BP_Hologram_C");
    return result;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::SetHoloLightsVisibility(bool IsVisible) {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::PlayScene() {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::HologramActivated0() {
    return;
}
void _Game_WorldInteracts_Hologram_BP_Hologram::BP_Hologram_C::ReceiveTick(float DeltaSeconds) {
    return;
}
