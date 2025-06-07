#include "..\FUObjectArray.hpp"
#include "BP_ConductorNetwork_C.hpp"
#include "..\_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource\BPC_ElectricitySource_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void* _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C*& _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_CurrentConnectedNetwork() {
    return *(_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C**)((uintptr_t)this + 0x398);
}
void* _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_Conductors() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_TextRender() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x368);
}
void* _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_ConductorActors() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_ElectricitySources() {
    return (void*)((uintptr_t)this + 0x3a0);
}
bool _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::get_isElectrified() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::set_isElectrified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Chemistry/BaseBlueprints/BP_ConductorNetwork.BP_ConductorNetwork_C");
    return result;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::HasElectricityInNetwork_(bool& Has_Electricity) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::HasElectricity_(bool& Has_Electricity) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::HasElectricityInternal_(bool& Has_Electricity) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::UpdateConnectedNetworks() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::DisconnectFromNetwork() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::ConnectToNetwork(_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C* ConductorNetwork) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::RemoveElectricSource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::AddElectricSource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* NewElectricSource) {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::TryElectrifyNetwork() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::TryUnElectrifyNetwork() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C::ExecuteUbergraph_BP_ConductorNetwork(int32_t EntryPoint) {
    return;
}
