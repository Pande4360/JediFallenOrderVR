#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_MissionObjective {
#pragma pack(push, 1)
struct BP_MissionObjective_C : public _Script_Engine::Actor {
    private: char pad_360[0x58]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_SM_POI_DiamondTest();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_ObjectiveName();
    _Script_Engine::StaticMesh*& get_StaticMesh_Primary();
    _Script_Engine::StaticMesh*& get_StaticMesh_Secondary();
    float& get_SecondaryScale();
    void* get_LVL_ObjectiveHidden();
    void* get_LVL_ObjectiveShown();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_MissionObjective(int32_t EntryPoint);
    void LVL_ObjectiveShown__DelegateSignature();
    void LVL_ObjectiveHidden__DelegateSignature();
}; // Size: 0x3b8
#pragma pack(pop)
}
