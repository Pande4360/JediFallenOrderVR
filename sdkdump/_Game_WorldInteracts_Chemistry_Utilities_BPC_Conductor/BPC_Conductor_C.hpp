#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork {
struct BP_ConductorNetwork_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource {
struct BPC_ElectricitySource_C;
}
namespace _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor {
#pragma pack(push, 1)
struct BPC_Conductor_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x60]; public:
    void* get_UberGraphFrame();
    void* get_ElectricitySources();
    bool get_isElectrified();
    void set_isElectrified(bool value);
    _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C*& get_ConductorNetworkParent();
    void* get_OnElectrify();
    void* get_OnUnElectrify();
    bool get_ElectrifyOnTouch();
    void set_ElectrifyOnTouch(bool value);
    bool get_IsEnabled();
    void set_IsEnabled(bool value);
    void* get_ParticleSystem();
    static _Script_CoreUObject::Class* static_class();
    void Disable(bool Unelectrify);
    void enable();
    void UnTouchElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source);
    void TouchElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source);
    void RemoveElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* ElectricitySourceToRemove);
    void AddElectricitySource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* NewElectricitySource);
    void ElectrifyConductor();
    void UnElectrifyConductor();
    void ExecuteUbergraph_BPC_Conductor(int32_t EntryPoint);
    void OnUnElectrify__DelegateSignature();
    void OnElectrify__DelegateSignature();
}; // Size: 0x1d0
#pragma pack(pop)
}
