#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Character.hpp"
namespace _Script_RsTechRT {
struct RsActorMotion;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct rsActor : public _Script_Engine::Character {
    private: char pad_780[0x10f0]; public:
    void* get_OnSyncInitDelegate();
    _Script_RsTechRT::RsActorMotion*& get_MotionModel();
    void* get_Topology();
    void* get_TopologyBumper();
    static _Script_CoreUObject::Class* static_class();
    void TeleportDirect(_Script_CoreUObject::Vector& DestLocation, _Script_CoreUObject::Rotator& DestRotation, bool bStandingDestination, bool bMaintainVelocity, bool bMaintainAnimation);
    void SetInputDirectionMagnitude(float magnitude);
    void SetInputDirectionLocal(_Script_CoreUObject::Vector2D localDir);
    void SetInputDirection(_Script_CoreUObject::Vector worldDir);
    void SetDefaultSkeletalAnimTickOption(void* TickOption);
    void SetBase(void* base);
    void SetAimDirection(_Script_CoreUObject::Vector worldDir, float intent);
    void LerpTo(_Script_CoreUObject::Vector& Destination, float TimeToTarget);
    bool IsTopologyModeSet();
    bool IsOnGround();
    bool IsInSyncedAnimation();
    int32_t GetSyncGroup();
    float GetInputDirectionMagnitude();
    _Script_CoreUObject::Vector GetInputDirection();
    bool GetClampToGeometry();
    _Script_CoreUObject::Vector GetAimDirection();
}; // Size: 0x1870
#pragma pack(pop)
}
