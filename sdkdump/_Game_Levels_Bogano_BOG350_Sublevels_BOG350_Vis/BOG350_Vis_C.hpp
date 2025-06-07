#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG350_Sublevels_BOG350_Vis {
#pragma pack(push, 1)
struct BOG350_Vis_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x10]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshActor*& get_BOG_RockHugeSlice_647_ExecuteUbergraph_BOG350_Vis_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void RE_WallRUnGym_DisableArtCollision();
    void RE_WallRunGym_EnableArtCollision();
    void ExecuteUbergraph_BOG350_Vis(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
