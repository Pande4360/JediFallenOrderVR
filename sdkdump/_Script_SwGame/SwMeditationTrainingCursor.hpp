#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_SwGame {
struct SwMeditationTrainingGrid;
}
namespace _Script_RsGameTechRT {
struct RsPlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingCursor : public _Script_Engine::Actor {
    private: char pad_360[0x80]; public:
    void* get_MovementXInputName();
    void* get_MovementYInputName();
    float& get_MovementInputDeadZone();
    float& get_MaxSpeed();
    float& get_Acceleration();
    float& get_EnemyDetectionRadius();
    float& get_OuterGridMovementBuffer();
    _Script_Engine::StaticMeshComponent*& get_MeshComponent();
    _Script_Engine::Actor*& get_Camera();
    _Script_SwGame::SwMeditationTrainingGrid*& get_MeditationGrid();
    _Script_RsGameTechRT::RsPlayerController*& get_PlayerController();
    bool get_bEnableMagnet();
    void set_bEnableMagnet(bool value);
    float& get_MagnetForce();
    static _Script_CoreUObject::Class* static_class();
    void SetMagnetTarget(_Script_CoreUObject::Vector& Location);
    void SetForceMagnetEnabled(bool bInForceEnable);
}; // Size: 0x3e0
#pragma pack(pop)
}
