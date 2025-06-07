#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Game_Models_Tile_Sets_VS_Village_Architecture_Blockout_SplineDef_BalanceBeamPipe {
#pragma pack(push, 1)
struct SplineDef_BalanceBeamPipe_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    _Script_Engine::SplineComponent*& get_SplineComponentFence();
    _Script_Engine::SceneComponent*& get_RootSceneComponent();
    float& get_spacing();
    float& get_tangentScale();
    _Script_Engine::MaterialInterface*& get_Material();
    _Script_Engine::StaticMesh*& get_Mesh();
    void* get_IKComplexGeoCollisionProfileName();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x390
#pragma pack(pop)
}
