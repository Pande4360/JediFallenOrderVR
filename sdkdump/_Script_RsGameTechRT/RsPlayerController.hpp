#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsPlayerCharacterDefinition;
}
namespace _Script_CoreUObject {
struct Quat;
}
namespace _Script_RsGameTechRT {
struct RsUiRoot;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPlayerController : public _Script_Engine::PlayerController {
    private: char pad_6d0[0x2f40]; public:
    _Script_CoreUObject::Object*& get_m_controllerMappingOwner();
    void* get_BuddyDroidActor();
    _Script_RsGameTechRT::RsPlayerCharacterDefinition*& get_PlayerCharacterDefinition();
    float& get_CameraLockMinimumPadIntensity();
    float& get_CameraLockBlendOutTime();
    bool get_bUseMovementInputForCamera();
    void set_bUseMovementInputForCamera(bool value);
    void* get_TargetControllerSpace();
    void* get_ControllerSpaceMode();
    void* get_ControllerSpaceAxisMapX();
    void* get_ControllerSpaceAxisMapY();
    float& get_ControllerSpaceAxisFactorX();
    float& get_ControllerSpaceAxisFactorY();
    void* get_ControllerDirection();
    void* get_ControllerDirectionLocal();
    void* get_UndampedControllerDirection();
    void* get_UndampedControllerDirectionLocal();
    void* get_SnappedControllerDirection();
    void* get_SnappedControllerDirectionLocal();
    float& get_ControllerAnalogDeadzone();
    bool get_ConsumeLeftAnalog();
    void set_ConsumeLeftAnalog(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UnlockCameraForInput();
    void SetUserControlSpaceMapping(_Script_CoreUObject::Object* mappingOwner, _Script_CoreUObject::Quat& newControllerSpace, void* axisMapX, void* axisMapY, float axisFactorX, float axisFactorY, int32_t snappingDivisions);
    void SetControlSpaceMode(void* newControllerSpaceMode);
    void ResetControlSpaceMapping(_Script_CoreUObject::Object* mappingOwner);
    void OnPauseChanged(bool bIsPaused);
    void LockCameraForInput(float MinimumPadIntensityForMaintainingCameraLock, float BlendOutTime);
    _Script_Engine::Actor* GetPlayerStart();
    _Script_RsGameTechRT::RsUiRoot* GetHudRoot();
}; // Size: 0x3610
#pragma pack(pop)
}
