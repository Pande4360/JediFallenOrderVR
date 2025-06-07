#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork\BP_ConductorNetwork_C.hpp"
#include "BPC_Conductor_C.hpp"
#include "..\_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource\BPC_ElectricitySource_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_ElectricitySources() {
    return (void*)((uintptr_t)this + 0x178);
}
bool _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_isElectrified() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::set_isElectrified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_OnUnElectrify() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C*& _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_ConductorNetworkParent() {
    return *(_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C**)((uintptr_t)this + 0x190);
}
void* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_OnElectrify() {
    return (void*)((uintptr_t)this + 0x198);
}
bool _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_ElectrifyOnTouch() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::set_ElectrifyOnTouch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_IsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::set_IsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::get_ParticleSystem() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Chemistry/Utilities/BPC_Conductor.BPC_Conductor_C");
    return result;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::Disable(bool Unelectrify) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::enable() {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::UnTouchElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::RemoveElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* ElectricitySourceToRemove) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::TouchElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::AddElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* NewElectricitySource) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::ElectrifyConductor() {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::UnElectrifyConductor() {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::ExecuteUbergraph_BPC_Conductor(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::OnUnElectrify__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C::OnElectrify__DelegateSignature() {
    return;
}
