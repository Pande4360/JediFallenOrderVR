#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapDoorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBendingMetalDoorActor : public _Script_Engine::Actor {
    private: char pad_360[0xe8]; public:
    void* get_SaveGameType();
    bool get_SetToForceIgnoredWhenDestroyed();
    void set_SetToForceIgnoredWhenDestroyed(bool value);
    float& get_InitialPosition();
    void* get_ForwardDirectionAxis();
    bool get_EnableDebugDrawForAxes();
    void set_EnableDebugDrawForAxes(bool value);
    bool get_ReactOnForcePush();
    void set_ReactOnForcePush(bool value);
    float& get_ForcePushInitialVelocity();
    float& get_ForcePushMovementDampingCoef();
    bool get_ReactOnForcePull();
    void set_ReactOnForcePull(bool value);
    void* get_ForcePullMode();
    float& get_ForcePullInitialVelocity();
    float& get_ForcePullMovementDampingCoef();
    void* get_ForcePush_MovementOscillation();
    void* get_ForcePush_FinishOscillation();
    void* get_ForcePull_MovementOscillation();
    void* get_ForcePull_FinishOscillation();
    _Script_RsGameTechRT::RsWorldMapDoorComponent*& get_WorldMapDoorComponent();
    float& get_GoBackToInitialPositionAfterTime();
    float& get_GoBackToInitialPositionVelocity();
    void* get_OnFullyOpenedEvent();
    _Script_Engine::SkeletalMeshComponent*& get_TargetSkeletalMeshComponent();
    float& get_m_SavedPosition();
    int32_t& get_m_SavedEncountersInstance();
    static _Script_CoreUObject::Class* static_class();
    void TriggerPushMovement(_Script_Engine::Actor* BendingMetalDoorActor, float DirectionMultiplier, float PushInitialVelocity);
}; // Size: 0x448
#pragma pack(pop)
}
