#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraActor.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "SwMeditationTrainingCamera.hpp"
#include "SwMeditationTrainingCursor.hpp"
#include "SwMeditationTrainingGrid.hpp"
void* _Script_SwGame::SwMeditationTrainingCamera::get_StartingCameraRotation() {
    return (void*)((uintptr_t)this + 0x8a0);
}
void* _Script_SwGame::SwMeditationTrainingCamera::get_CameraTransitionParamsForEntry() {
    return (void*)((uintptr_t)this + 0x8c8);
}
void* _Script_SwGame::SwMeditationTrainingCamera::get_StartingCameraPosition() {
    return (void*)((uintptr_t)this + 0x8ac);
}
float& _Script_SwGame::SwMeditationTrainingCamera::get_CameraFOV() {
    return *(float*)((uintptr_t)this + 0x8b8);
}
float& _Script_SwGame::SwMeditationTrainingCamera::get_CameraZoom() {
    return *(float*)((uintptr_t)this + 0x8bc);
}
float& _Script_SwGame::SwMeditationTrainingCamera::get_CameraSmooth() {
    return *(float*)((uintptr_t)this + 0x8c0);
}
float& _Script_SwGame::SwMeditationTrainingCamera::get_CameraRotationSmooth() {
    return *(float*)((uintptr_t)this + 0x8c4);
}
void* _Script_SwGame::SwMeditationTrainingCamera::get_CameraTransitionParamsForExit() {
    return (void*)((uintptr_t)this + 0x8d8);
}
_Script_SwGame::SwMeditationTrainingCursor*& _Script_SwGame::SwMeditationTrainingCamera::get_TrackedCursor() {
    return *(_Script_SwGame::SwMeditationTrainingCursor**)((uintptr_t)this + 0x8e8);
}
_Script_SwGame::SwMeditationTrainingGrid*& _Script_SwGame::SwMeditationTrainingCamera::get_TrackedGrid() {
    return *(_Script_SwGame::SwMeditationTrainingGrid**)((uintptr_t)this + 0x8f0);
}
_Script_Engine::Actor*& _Script_SwGame::SwMeditationTrainingCamera::get_OriginalViewTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8f8);
}
_Script_Engine::PlayerController*& _Script_SwGame::SwMeditationTrainingCamera::get_PlayerController() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x900);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingCamera");
    return result;
}
void _Script_SwGame::SwMeditationTrainingCamera::SetCameraTransformGoal(_Script_CoreUObject::Transform NewGoal) {
    return;
}
