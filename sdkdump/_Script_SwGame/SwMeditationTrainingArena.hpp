#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_SwGame {
struct SwMeditationTrainingArenaLights;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingArena : public _Script_Engine::Actor {
    private: char pad_360[0x78]; public:
    float& get_ArenaScaleMultiplier();
    float& get_ArenaPadding();
    void* get_DefaultArenaSize();
    _Script_Engine::SceneComponent*& get_ArenaRoot();
    _Script_Engine::StaticMeshComponent*& get_BlockingWallRight();
    _Script_Engine::StaticMeshComponent*& get_BlockingWallLeft();
    _Script_Engine::StaticMeshComponent*& get_BlockingWallForward();
    _Script_Engine::StaticMeshComponent*& get_BlockingWallBackward();
    _Script_Engine::StaticMeshComponent*& get_BlockingCeiling();
    void* get_ArenaLightsClass();
    _Script_SwGame::SwMeditationTrainingArenaLights*& get_ArenaLights();
    void* get_PreviousArenaCentre();
    void* get_PreviousArenaDimensions();
    void* get_CurrentArenaCentre();
    void* get_CurrentArenaDimensions();
    static _Script_CoreUObject::Class* static_class();
    void SetArenaSizeImmediate(_Script_CoreUObject::Vector& ArenaCentre, _Script_CoreUObject::Vector2D& ArenaDimensions);
    void OnResizeArena(_Script_CoreUObject::Vector& ArenaCentre, _Script_CoreUObject::Vector2D& ArenaDimensions);
}; // Size: 0x3d8
#pragma pack(pop)
}
