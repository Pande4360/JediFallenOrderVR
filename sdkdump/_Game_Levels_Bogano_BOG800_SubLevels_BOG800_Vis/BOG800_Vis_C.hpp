#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct RsInstanceMergedActor;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DecalActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Vis {
#pragma pack(push, 1)
struct BOG800_Vis_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x68]; public:
    void* get_UberGraphFrame();
    _Script_Engine::RsInstanceMergedActor*& get_RsInstanceMergedActor34_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockHugeSlice_31_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG100_CaveShell_03_45_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockHugeRoughSlice_358_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockSlabSlice_01_BendMed_52_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockSlabSlice_01_BendMed_1084_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockHugeRoughSlice_1106_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockHugeSlice_1136_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::StaticMeshActor*& get_BOG_RockSlabSliceSmall_1112_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::Actor*& get_None_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::RsInstanceMergedActor*& get_RsInstanceMergedActor30_ExecuteUbergraph_BOG800_Vis_RefProperty();
    _Script_Engine::DecalActor*& get_M_Vision_Decal_2_ExecuteUbergraph_BOG800_Vis_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void RE_WallRunUnlock_HideBoganoCliffs();
    void RE_WallRunUnlock_ShowBoganoCliffs();
    void ReceiveBeginPlay();
    void RE_HideAcquireDecal();
    void ExecuteUbergraph_BOG800_Vis(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
