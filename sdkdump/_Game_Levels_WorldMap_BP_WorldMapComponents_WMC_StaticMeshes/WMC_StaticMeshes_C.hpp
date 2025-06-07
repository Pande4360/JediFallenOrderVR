#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes {
#pragma pack(push, 1)
struct WMC_StaticMeshes_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x58]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_TerrainMeshActors();
    void* get_TerrainMeshArr();
    void* get_MainMeshActors();
    _Script_RsGameTechRT::RsWorldMapStaticMeshActor*& get_ShipActor();
    void* get_ZipelineLineActors();
    static _Script_CoreUObject::Class* static_class();
    void SetTerrainMeshParameters();
    void GetShipActor();
    void ClearAllMeshArrays();
    void AssignMeshToArrays(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* L_CurrentMesh);
    void SetTerrainMesh(bool OnMapOpen);
    void ShowAllExploredMeshes();
    void SetTerrainMeshesToCorrectColor(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Actor);
    void ReceiveBeginPlay0();
    void ClassifyStaticMeshes();
    void ExecuteUbergraph_WMC_StaticMeshes(int32_t EntryPoint);
}; // Size: 0x1c8
#pragma pack(pop)
}
