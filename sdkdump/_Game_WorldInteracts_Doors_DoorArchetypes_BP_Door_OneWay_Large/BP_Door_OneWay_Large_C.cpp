#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Doors_BP_Door\BP_Door_C.hpp"
#include "BP_Door_OneWay_Large_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
float& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_PulsingLightOn_LightPulseIntensity_C510168F41A4F8223A9FB59BF9C3C280() {
    return *(float*)((uintptr_t)this + 0x730);
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x6f8);
}
void* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::UserConstructionScript0() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_lockSlideClosed() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6c8);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_OneWay_Light_01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6f0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_LeftDoor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6d0);
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::set_PlayerInConsoleZone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x750 + 0);
    *(uint8_t*)((uintptr_t)this + 0x750 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_StaticMesh1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6e8);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_RightDoor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6d8);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_hangerDoorLockOpen() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6e0);
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::PulsingLightOn__PlaySound__EventFunc() {
    return;
}
_Script_Engine::SpotLightComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_OneWay_Big_red_Spot_01() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x700);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_OneWay_Light_011() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x708);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_hangerDoorLockOpen1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x710);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_hangerDoorLockclosed() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x718);
}
float& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_DoorUnlockPieceLerp_NewTrack_0_E289321A4E3C60067C0B0180D721C914() {
    return *(float*)((uintptr_t)this + 0x720);
}
void* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_DoorUnlockPieceLerp__Direction_E289321A4E3C60067C0B0180D721C914() {
    return (void*)((uintptr_t)this + 0x724);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_DoorUnlockPieceLerp() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x728);
}
void* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_PulsingLightOn__Direction_C510168F41A4F8223A9FB59BF9C3C280() {
    return (void*)((uintptr_t)this + 0x734);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_PulsingLightOn() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x738);
}
void* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_spotLightGreen() {
    return (void*)((uintptr_t)this + 0x740);
}
bool _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_PlayerInConsoleZone() {
    return (*(uint8_t*)((uintptr_t)this + 0x750 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_spotLightRed() {
    return (void*)((uintptr_t)this + 0x754);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::get_HackPanelBeep() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x768);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Doors/DoorArchetypes/BP_Door_OneWay_Large.BP_Door_OneWay_Large_C");
    return result;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::ShouldAllowInteract__OverrideMe(bool& Result) {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::HandleUnlockVFXUpdate(bool Unlocked) {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::GetPlayerDoorOpenSide0(bool& LeftSide) {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::DoorUnlockPieceLerp__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::DoorUnlockPieceLerp__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::PulsingLightOn__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::PulsingLightOn__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::PlayUnlockVisuals_Door0() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::UpdateCustomUnlockFX0(bool Unlocked) {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::UpdateLockAndLightPulses(bool Locked) {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large::BP_Door_OneWay_Large_C::ExecuteUbergraph_BP_Door_OneWay_Large(int32_t EntryPoint) {
    return;
}
