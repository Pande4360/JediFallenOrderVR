#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsTechRT {
struct RsTweaks;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Script_SwGame {
struct R4PlayerController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting {
#pragma pack(push, 1)
struct HC_zTargeting_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0xf8]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_Engine::ParticleSystemComponent*& get_zTargeting_Icon();
    _Script_SwGame::R4PlayerController*& get_PlayerController();
    _Script_Engine::Actor*& get_LockOnTarget();
    _Script_Engine::ParticleSystemComponent*& get_zTargeting_Icon_Active();
    float& get_bestProximityValue();
    float& get_MaxDistance();
    float& get_maxDistMultiplier();
    float& get_currentMaxDistance();
    _Script_Engine::Actor*& get_tempBestTarget();
    bool get_autoTargetSwap();
    void set_autoTargetSwap(bool value);
    float& get_PitchOffset();
    float& get_PitchMin();
    float& get_PitchMax();
    float& get_crabPitchOffset();
    float& get_crabPitchMin();
    float& get_crabPitchMax();
    _Script_RsTechRT::RsTweaks*& get_zTargetTweaks();
    float& get_defaultPitchOffset();
    float& get_defaultPitchMin();
    float& get_defaultPitchMax();
    float& get_occludedTimer();
    float& get_occlusionTimeOut();
    float& get_cameraLagMin();
    float& get_cameraLagMax();
    float& get_brutePitchOffset();
    float& get_brutePitchMin();
    float& get_brutePitchMax();
    void* get_CameraMode();
    bool get_nonHostileTargeted();
    void set_nonHostileTargeted(bool value);
    float& get_LookDeadZone();
    bool get_zSwitching();
    void set_zSwitching(bool value);
    bool get_zTargetActive();
    void set_zTargetActive(bool value);
    bool get_noIcon();
    void set_noIcon(bool value);
    float& get_zTargetStartTimeStamp();
    float& get_zTargetStartTimeStampAI();
    int32_t& get_telemetry_NumZTargets();
    void* get_HeroZTargeted();
    void* get_HeroSwitchedZTarget();
    void* get_HeroExitedZTarget();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    float& get_MaxAngle();
    static _Script_CoreUObject::Class* static_class();
    void zTargetSwitch(_Script_CoreUObject::Vector& inputDir);
    void InitZTargetLogTime();
    void LogZTargetExit();
    void CanZTarget(void* Action_Name, bool& CanZTarget);
    void UpdateZTargetingIcon();
    void CalculateRotationToCamera(_Script_Engine::SceneComponent* componentAttachedTo, _Script_CoreUObject::Rotator& Rotation);
    void SetZTarget(_Script_Engine::Actor* NewZTarget, _Script_Engine::Actor*& zTarget);
    void ReceiveBeginPlay();
    void AutoDetachTarget();
    void zTarget_Activate(bool forceNone, bool ResetCamera, bool noIcon);
    void ReceiveTick(float DeltaSeconds);
    void TargetFound();
    void zTargetExit();
    void TargetSwitch(float x_axis_input, float y_axis_input);
    void OcclusionTest(float Delta);
    void Unbind_DeathEvent();
    void Bind_Death_Event();
    void zTargetDead(_Script_Engine::Actor* DeadActor);
    void zTargetDestroyed(_Script_Engine::Actor* DestroyedActor);
    void ModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier);
    void OnDebugFlyEntered(void* NewState, void* PrevState);
    void Action_zTargetActivate();
    void Action_ExitZTarget();
    void ZTargetHandleResult(_Script_Engine::Actor* Target);
    void Reset_Camera_Rotation();
    void Turn_To_Target();
    void Spawn_ZTarget_Icon();
    void Delayed_Unsheathe();
    void SetCameraMode();
    void AutoActivateZTarget(_Script_Engine::Actor* Target);
    void Set_ZTarget_Focus_Actor();
    void TargetSwitchPC(float XAxis, float YAxis);
    void Update_Photomode_Visibility();
    void ExecuteUbergraph_HC_zTargeting(int32_t EntryPoint);
    void HeroExitedZTarget__DelegateSignature();
    void HeroSwitchedZTarget__DelegateSignature();
    void HeroZTargeted__DelegateSignature(_Script_Engine::Actor* NewTarget);
}; // Size: 0x278
#pragma pack(pop)
}
