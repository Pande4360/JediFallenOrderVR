#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionStaticMeshActor.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_StateTransition_StaticMesh_BP_StateTransitionStaticMesh_General {
#pragma pack(push, 1)
struct BP_StateTransitionStaticMesh_General_C : public _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshActor {
    private: char pad_3a0[0x30]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_StateTwo();
    _Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& get_StateOne();
    _Script_Engine::SceneComponent*& get_Scene();
    bool get_bStateChanged();
    void set_bStateChanged(bool value);
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetVisible();
    void ReceiveStateChanged0(int32_t State);
    void OnRegionChange();
    void SetVisibility();
    void ExecuteUbergraph_BP_StateTransitionStaticMesh_General(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
