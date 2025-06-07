#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK {
struct BP_SlideBlock_TK_C;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SlideBlock {
#pragma pack(push, 1)
struct BP_SlideBlock_C : public _Script_Engine::Actor {
    private: char pad_360[0xd0]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::SceneComponent*& get_EndLoc();
    _Script_Engine::StaticMeshComponent*& get_bLock();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_ForcePush_TL_progress_BFDD1C35437ADC0C27DA52BB89D5A169();
    void* get_ForcePush_TL__Direction_BFDD1C35437ADC0C27DA52BB89D5A169();
    _Script_Engine::TimelineComponent*& get_ForcePush_TL();
    void* get_EndLocation();
    float& get_travelTime();
    bool get_ConvertToTKObject();
    void set_ConvertToTKObject(bool value);
    bool get_HasSlid();
    void set_HasSlid(bool value);
    void* get_Lvl_Pushed();
    bool get_HasMidPoint();
    void set_HasMidPoint(bool value);
    void* get_midPoint();
    float& get_midpointPercentage();
    bool get_ForcePullable();
    void set_ForcePullable(bool value);
    _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C*& get_SpawnedTKBlock();
    bool get_TKBlockSpawned();
    void set_TKBlockSpawned(bool value);
    void* get_SpawnedTKBlockTransform();
    static _Script_CoreUObject::Class* static_class();
    void SetCanLedgeGrab(bool CanLedgeCrab);
    void UserConstructionScript0();
    void ForcePush_TL__FinishedFunc();
    void ForcePush_TL__UpdateFunc();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void DisableForceHighlight();
    void ReceiveBeginPlay0();
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ReceiveEndPlay0(void* EndPlayReason);
    void HideBlock();
    void ExecuteUbergraph_BP_SlideBlock(int32_t EntryPoint);
    void Lvl_Pushed__DelegateSignature();
}; // Size: 0x430
#pragma pack(pop)
}
