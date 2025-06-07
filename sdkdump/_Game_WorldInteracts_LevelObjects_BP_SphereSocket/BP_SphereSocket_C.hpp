#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionStaticMeshComponent;
}
namespace _Script_Engine {
struct PhysicsHandleComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
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
namespace _Game_WorldInteracts_LevelObjects_BP_SphereKey {
struct BP_SphereKey_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SphereSocket {
#pragma pack(push, 1)
struct BP_SphereSocket_C : public _Script_Engine::Actor {
    private: char pad_360[0x130]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStateTransitionStaticMeshComponent*& get_RsWorldMapStateTransitionStaticMesh();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::ParticleSystemComponent*& get_P_Magnet_Effect_Push_Keyhole();
    _Script_Engine::StaticMeshComponent*& get_ActiveGlow();
    _Script_Engine::StaticMeshComponent*& get_Ball_Platform01();
    _Script_Engine::SphereComponent*& get_ActivateZone();
    _Script_Engine::SceneComponent*& get_GrabLoc();
    _Script_Engine::PhysicsHandleComponent*& get_PhysicsHandle();
    _Script_Engine::SphereComponent*& get_MagnetZone();
    _Script_Engine::StaticMeshComponent*& get_Sphere();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_BumpTimeline_BumpModifier_CE4814B046487683C6A493BB2AE17192();
    void* get_BumpTimeline__Direction_CE4814B046487683C6A493BB2AE17192();
    _Script_Engine::TimelineComponent*& get_BumpTimeline();
    float& get_RotateToSocket_MaxAngularSpeed_9FACD1D743066A8C22ECF08BCF368FCD();
    float& get_RotateToSocket_InterpSpeed_9FACD1D743066A8C22ECF08BCF368FCD();
    void* get_RotateToSocket__Direction_9FACD1D743066A8C22ECF08BCF368FCD();
    _Script_Engine::TimelineComponent*& get_RotateToSocket();
    void* get_CheckMoving__Direction_FF088F794277D7AD6F14ADBCA2E88C94();
    _Script_Engine::TimelineComponent*& get_CheckMoving();
    float& get_AnimateToSocket_progress_7A9488604B0AFBC43494F68FEFD7BEBA();
    void* get_AnimateToSocket__Direction_7A9488604B0AFBC43494F68FEFD7BEBA();
    _Script_Engine::TimelineComponent*& get_AnimateToSocket();
    void* get_SphereStartLoc();
    void* get_MagnetRotation();
    float& get_SuctionTime();
    void* get_LVL_OnRelease();
    void* get_LVL_OnAttach();
    float& get_MagnetRadius();
    bool get_SocketEnabled();
    void set_SocketEnabled(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Activate_Sound();
    _Script_AkAudio::AkAudioEvent*& get_Deacivate_Sound();
    _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& get_MagetizingSphereKey();
    _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& get_AttachedSphereKey();
    bool get_BeginPlay();
    void set_BeginPlay(bool value);
    _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C*& get_LeavingSphereKey();
    float& get_BumpAmount();
    bool get_LocksSphereKey();
    void set_LocksSphereKey(bool value);
    bool get_SphereLockedInPlace();
    void set_SphereLockedInPlace(bool value);
    bool get_AltSave_MoveKeyToSocket();
    void set_AltSave_MoveKeyToSocket(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateMagnetAngularSpeed(float MaxSpeed);
    void UpdateMagnetRotation();
    void UserConstructionScript0();
    void AnimateToSocket__FinishedFunc();
    void AnimateToSocket__UpdateFunc();
    void CheckMoving__FinishedFunc();
    void CheckMoving__UpdateFunc();
    void RotateToSocket__FinishedFunc();
    void RotateToSocket__UpdateFunc();
    void BumpTimeline__FinishedFunc();
    void BumpTimeline__UpdateFunc();
    void ReceiveBeginPlay0();
    void BndEvt__EntryZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void LVL_Release();
    void Activate(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey, bool BeginPlay);
    void BndEvt__ActivateZone_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ActivateMagnet(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey);
    void LVL_DisableSocket();
    void LVL_EnableSocket();
    void ReleaseMagnet(bool FromTK);
    void StopMagnet();
    void PlayActivationEffects();
    void BndEvt__ActivateZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void TKEnded(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey);
    void StopCheckMoving();
    void Lvl_BumpSphereUpwardOnForceUse(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* ForcedSphereKey);
    void LockIntoSocket();
    void BackUpReleaseEventReceived(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey);
    void ExecuteUbergraph_BP_SphereSocket(int32_t EntryPoint);
    void LVL_OnAttach__DelegateSignature(bool BeginPlay);
    void LVL_OnRelease__DelegateSignature();
}; // Size: 0x490
#pragma pack(pop)
}
