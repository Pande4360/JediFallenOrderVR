#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_BP_DeathXP {
#pragma pack(push, 1)
struct BP_DeathXP_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C {
    private: char pad_418[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ParticleSystemComponent*& get_P_Psychometry_Revenge();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Interacted0();
    void LVL_activate();
    void ExecuteUbergraph_BP_DeathXP(int32_t EntryPoint);
}; // Size: 0x430
#pragma pack(pop)
}
