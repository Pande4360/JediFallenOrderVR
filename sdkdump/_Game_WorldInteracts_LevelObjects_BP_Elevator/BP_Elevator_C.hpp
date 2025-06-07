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
struct BoxComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_RsGameTechRT {
struct RsNavModifierComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_WorldInteracts_LevelObjects_BP_Elevator {
#pragma pack(push, 1)
struct BP_Elevator_C : public _Script_Engine::Actor {
    private: char pad_360[0x140]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_SquishBox();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapOneWayGateway();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_RsGameTechRT::RsNavModifierComponent*& get_RsNavModifierDown();
    _Script_RsGameTechRT::RsNavModifierComponent*& get_RsNavModifierUp();
    _Script_Engine::BoxComponent*& get_NavBlockerUp();
    _Script_Engine::BoxComponent*& get_NavBlockerDown();
    _Script_Engine::BoxComponent*& get_onElevator();
    _Script_Engine::BoxComponent*& get_platformOverlap();
    _Script_Engine::ChildActorComponent*& get_callDownSwitch();
    _Script_Engine::ChildActorComponent*& get_callUpSwitch();
    _Script_Engine::StaticMeshComponent*& get_endLoc___WillBuildNav();
    _Script_Engine::StaticMeshComponent*& get_Elevator();
    _Script_Engine::SceneComponent*& get_Root();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::StaticMeshComponent*& get_upSwitchLight();
    _Script_Engine::StaticMeshComponent*& get_downSwitchLight();
    _Script_Engine::StaticMeshComponent*& get_downSwitchPanel();
    _Script_Engine::StaticMeshComponent*& get_upSwitchPanel();
    float& get_Elevator_Animate_Alpha_7BC179C14B70724185312BA8F2162C3C();
    void* get_Elevator_Animate__Direction_7BC179C14B70724185312BA8F2162C3C();
    _Script_Engine::TimelineComponent*& get_Elevator_Animate();
    void* get_Lvl_Elevator_ReachedTop();
    void* get_Lvl_Elevator_ReachedBottom();
    bool get_Active();
    void set_Active(bool value);
    bool get_atEndLoc();
    void set_atEndLoc(bool value);
    float& get_ElevatorTime();
    void* get_Lvl_Elevator_LeavingBottom();
    void* get_Lvl_Elevator_LeavingTop();
    bool get_callUpSwitchExists();
    void set_callUpSwitchExists(bool value);
    bool get_callDownSwitchExists();
    void set_callDownSwitchExists(bool value);
    bool get_IsMoving();
    void set_IsMoving(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Audio_Elevator_Start();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Elevator_Stop();
    void* get_Lvl_Elevator_FirstActivation();
    bool get_isDisabled_NOSAVE();
    void set_isDisabled_NOSAVE(bool value);
    bool get_bShowButtonMsgWhenInActive();
    void set_bShowButtonMsgWhenInActive(bool value);
    float& get_PressurePlateMoveDistance();
    void* get_CameraShakeClass();
    bool get_isElevatorInUse();
    void set_isElevatorInUse(bool value);
    bool get_leaveLowerNavOff();
    void set_leaveLowerNavOff(bool value);
    bool get_ShortcutUnlockedMessage();
    void set_ShortcutUnlockedMessage(bool value);
    bool get_Elevator_Lights_VL();
    void set_Elevator_Lights_VL(bool value);
    int32_t& get_VL_Material_Index();
    bool get_saveShortcut();
    void set_saveShortcut(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetElevatorPlatformLights(bool On);
    void UserConstructionScript0();
    void Elevator_Animate__FinishedFunc();
    void Elevator_Animate__UpdateFunc();
    void Elevator_Animate__Audio_Backward_Stop__EventFunc();
    void Elevator_Animate__Audio_Backward_Start__EventFunc();
    void Elevator_Animate__Audio_Forward_Stop__EventFunc();
    void Elevator_Animate__Audio_Forward_Start__EventFunc();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void LVL_setActive(bool Active);
    void startElevator();
    void PoweredOn(bool BeginPlay);
    void PoweredOff(bool BeginPlay);
    void LVL_CallDownInstant();
    void LVL_CallUpInstant();
    void SetupCallSwitches(bool On_, bool Up_);
    void LVL_setDisabled(bool IsDisabled);
    void LVL_SetupSwitches(bool CallUpExists, bool CallDownExists, bool Destroy_);
    void BndEvt__onElevator_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void BndEvt__SquishBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void LVL_CallDown();
    void LVL_CallUp();
    void ExecuteUbergraph_BP_Elevator(int32_t EntryPoint);
    void Lvl_Elevator_FirstActivation__DelegateSignature();
    void Lvl_Elevator_LeavingTop__DelegateSignature();
    void Lvl_Elevator_LeavingBottom__DelegateSignature();
    void Lvl_Elevator_ReachedBottom__DelegateSignature();
    void Lvl_Elevator_ReachedTop__DelegateSignature();
}; // Size: 0x4a0
#pragma pack(pop)
}
