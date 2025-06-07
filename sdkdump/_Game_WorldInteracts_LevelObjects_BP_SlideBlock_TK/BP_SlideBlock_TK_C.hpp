#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Telekinesis_BP_TKObject\BP_TKObject_C.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK {
#pragma pack(push, 1)
struct BP_SlideBlock_TK_C : public _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C {
    private: char pad_440[0x50]; public:
    void* get_UberGraphFrame0();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    void* get_CanLedgeGrabTick__Direction_4164CB924A8D407D5A97F094959E9199();
    _Script_Engine::TimelineComponent*& get_CanLedgeGrabTick();
    void* get_initialVelocity();
    bool get_LimitRotation();
    void set_LimitRotation(bool value);
    _Script_Engine::StaticMesh*& get_Mesh();
    void* get_PrevCheckLocation();
    bool get_HasPrevCheckLocation();
    void set_HasPrevCheckLocation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EnableCanLedgeGrabTick();
    void SetCanLedgeGrab(bool CanLedgeGrab);
    void UserConstructionScript0();
    void CanLedgeGrabTick__FinishedFunc();
    void CanLedgeGrabTick__UpdateFunc();
    void ReceiveBeginPlay();
    void OnForcePushStart0(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd0();
    void OnForcePullStart0(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SlideBlock_TK(int32_t EntryPoint);
}; // Size: 0x490
#pragma pack(pop)
}
