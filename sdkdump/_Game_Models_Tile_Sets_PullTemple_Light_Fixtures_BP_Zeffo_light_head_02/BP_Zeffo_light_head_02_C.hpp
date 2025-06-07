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
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Tile_Sets_PullTemple_Light_Fixtures_BP_Zeffo_light_head_02 {
#pragma pack(push, 1)
struct BP_Zeffo_light_head_02_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    _Script_Engine::StaticMeshComponent*& get_Zeffo_light_head_02();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::StaticMeshComponent*& get_mouth_core();
    _Script_Engine::PointLightComponent*& get_mouth_Plight();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x380
#pragma pack(pop)
}
