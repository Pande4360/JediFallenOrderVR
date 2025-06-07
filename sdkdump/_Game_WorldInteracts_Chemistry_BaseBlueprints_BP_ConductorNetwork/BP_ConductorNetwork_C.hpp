#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource {
struct BPC_ElectricitySource_C;
}
namespace _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork {
#pragma pack(push, 1)
struct BP_ConductorNetwork_C : public _Script_Engine::Actor {
    private: char pad_360[0x58]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_ConductorActors();
    void* get_Conductors();
    _Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C*& get_CurrentConnectedNetwork();
    void* get_ElectricitySources();
    bool get_isElectrified();
    void set_isElectrified(bool value);
    static _Script_CoreUObject::Class* static_class();
    void HasElectricityInNetwork_(bool& Has_Electricity);
    void HasElectricity_(bool& Has_Electricity);
    void HasElectricityInternal_(bool& Has_Electricity);
    void UpdateConnectedNetworks();
    void DisconnectFromNetwork();
    void ConnectToNetwork(_Game_WorldInteracts_Chemistry_BaseBlueprints_BP_ConductorNetwork::BP_ConductorNetwork_C* ConductorNetwork);
    void RemoveElectricSource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* Electricity_Source);
    void AddElectricSource(_Game_WorldInteracts_Chemistry_Utilities_BPC_ElectricitySource::BPC_ElectricitySource_C* NewElectricSource);
    void UserConstructionScript0();
    void TryElectrifyNetwork();
    void TryUnElectrifyNetwork();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_ConductorNetwork(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
