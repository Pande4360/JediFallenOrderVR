#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsFallingKillRelocator : public _Script_Engine::ActorComponent {
    private: char pad_170[0xb00]; public:
    void* get_OnPlayerStartTeleporting();
    void* get_OnPlayerTeleported();
    void* get_OnFindingRespawnPointFailure();
    float& get_QueryHalfGridSize();
    float& get_QueryGridSpan();
    float& get_EdgeAvoidanceRadius();
    int32_t& get_EdgeAvoidanceTestsNum();
    float& get_ThreatAvoidanceRadius();
    float& get_ThreatAvoidanceCoefficient();
    float& get_MaxTrackBackTime();
    int32_t& get_TrackBackInterval();
    float& get_TrackBackMinDistance();
    static _Script_CoreUObject::Class* static_class();
    void TeleportPlayerToLastAvailableLocation(void*& Result, float DamageAmount, void* DamageTypeClass, float Delay);
    void StopRecordingUntilTeleported();
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
    bool HasStoppedRecording();
    _Script_CoreUObject::Vector GetBestRelocationPoint();
    void ClearHistoryAndSetRelocationPoint(_Script_CoreUObject::Vector& InLocation, _Script_CoreUObject::Rotator& InRotation, bool bClampToGround);
    void ClearHistoryAndSetRelocationComponent(_Script_Engine::SceneComponent* InComponent, bool bClampToGround);
}; // Size: 0xc70
#pragma pack(pop)
}
