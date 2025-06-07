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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_MissionObjectiveTrailActor {
#pragma pack(push, 1)
struct BP_MissionObjectiveTrailActor_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    _Script_Engine::StaticMeshComponent*& get_Target();
    _Script_Engine::StaticMeshComponent*& get_SM_WorldMapHologram_MissionEventDirectionArrow();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Zoom();
    int32_t& get_AnimationPosition();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x380
#pragma pack(pop)
}
