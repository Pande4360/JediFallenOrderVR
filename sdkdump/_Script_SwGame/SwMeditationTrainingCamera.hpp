#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\CameraActor.hpp"
namespace _Script_SwGame {
struct SwMeditationTrainingCursor;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwMeditationTrainingGrid;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingCamera : public _Script_Engine::CameraActor {
    private: char pad_8a0[0xa0]; public:
    void* get_StartingCameraRotation();
    void* get_StartingCameraPosition();
    float& get_CameraFOV();
    float& get_CameraZoom();
    float& get_CameraSmooth();
    float& get_CameraRotationSmooth();
    void* get_CameraTransitionParamsForEntry();
    void* get_CameraTransitionParamsForExit();
    _Script_SwGame::SwMeditationTrainingCursor*& get_TrackedCursor();
    _Script_SwGame::SwMeditationTrainingGrid*& get_TrackedGrid();
    _Script_Engine::Actor*& get_OriginalViewTarget();
    _Script_Engine::PlayerController*& get_PlayerController();
    static _Script_CoreUObject::Class* static_class();
    void SetCameraTransformGoal(_Script_CoreUObject::Transform NewGoal);
}; // Size: 0x940
#pragma pack(pop)
}
