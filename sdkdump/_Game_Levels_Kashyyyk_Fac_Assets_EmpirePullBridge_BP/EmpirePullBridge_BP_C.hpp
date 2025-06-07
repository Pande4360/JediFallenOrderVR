#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_BaseRope {
struct BP_BaseRope_C;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP {
#pragma pack(push, 1)
struct EmpirePullBridge_BP_C : public _Script_Engine::Actor {
    private: char pad_360[0x78]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapOneWayGateway();
    _Script_Engine::SphereComponent*& get_Force_Collision();
    _Script_Engine::StaticMeshComponent*& get_Bridge();
    _Script_AkAudio::AkComponent*& get_Audio_Sparks();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::SkeletalMeshComponent*& get_KAS_Push_Bridge_base_geo();
    _Script_Engine::SceneComponent*& get_Root();
    bool get_isUp_();
    void set_isUp_(bool value);
    _Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C*& get_Rope();
    _Script_RsGameTechRT::RsRopeComponent*& get_RopeComponentVar();
    void* get_LVL_Opened();
    float& get_OpenAmount();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
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
    void ReceiveBeginPlay0();
    void setOpenAmount(float OpenAmount);
    void setIsUp(bool isUp_);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ExecuteUbergraph_EmpirePullBridge_BP(int32_t EntryPoint);
    void LVL_Opened__DelegateSignature();
}; // Size: 0x3d8
#pragma pack(pop)
}
