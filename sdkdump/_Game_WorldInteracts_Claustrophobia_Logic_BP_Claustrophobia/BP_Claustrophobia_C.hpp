#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_RsGameTechRT {
struct RsSplineCameraOrigin;
}
namespace _Script_RsGameTechRT {
struct RsAIAnimInstance;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsSlaveSyncInstance;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_WorldInteracts_Claustrophobia_Logic_BP_Claustrophobia {
#pragma pack(push, 1)
struct BP_Claustrophobia_C : public _Script_Engine::Actor {
    private: char pad_360[0x530]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_SyncBackward();
    _Script_Engine::CapsuleComponent*& get_CapsuleBackward();
    _Script_Engine::ArrowComponent*& get_SyncForward();
    _Script_Engine::CapsuleComponent*& get_CapsuleForward();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_CheckEarlyOutTick__Direction_05687688456959D260BB08944504F2AE();
    _Script_Engine::TimelineComponent*& get_CheckEarlyOutTick();
    void* get_MoveSequence();
    void* get_MirrorSequence();
    void* get_SyncPoints();
    void* get_ForwardVectors();
    void* get_ExitType();
    bool get_Initialized();
    void set_Initialized(bool value);
    _Script_RsGameTechRT::RsHero*& get_Hero();
    _Script_SwGame::SwAIBuddyDroid*& get_BuddyDroid();
    _Script_RsGameTechRT::RsAIAnimInstance*& get_BDAnimInstance();
    bool get_IsIdle();
    void set_IsIdle(bool value);
    void* get_EnterType();
    bool get_Reverse();
    void set_Reverse(bool value);
    bool get_ExitReverse();
    void set_ExitReverse(bool value);
    int32_t& get_MoveIndex();
    void* get_MovesMap();
    void* get_ReverseEnterMap();
    void* get_ReverseMoveMap();
    void* get_MirrorMoveMap();
    void* get_ReverseExitMap();
    void* get_NextIdleMap();
    void* get_CancelIdleMap();
    void* get_ChangeSidesMoves();
    void* get_BD1Moves();
    void* get_EnterSyncMap();
    void* get_MoveSyncMap();
    void* get_ExitSyncMap();
    void* get_NextIdle();
    void* get_IdleSyncMap();
    void* get_Moves();
    _Script_RsGameTechRT::RsSplineCameraOrigin*& get_ForwardSpline();
    _Script_RsGameTechRT::RsSplineCameraOrigin*& get_ReverseSpline();
    float& get_DefaultTunnelWidth();
    float& get_DefaultTotalWidth();
    float& get_DefaultTunnelHeight();
    float& get_DefaultTotalHeight();
    bool get_AutoPositionCameraOrigins();
    void set_AutoPositionCameraOrigins(bool value);
    bool get_BuildProxyMesh();
    void set_BuildProxyMesh(bool value);
    _Script_RsGameTechRT::RsSyncDefinition*& get_MoveSync();
    void* get_MoveEnum();
    void* get_LVL_EnteredForward();
    void* get_LVL_EnteredReverse();
    void* get_LVL_EnteredAny();
    void* get_LVL_ExitedForward();
    void* get_LVL_ExitedReverse();
    void* get_LVL_ExitedAny();
    bool get_TurnAround();
    void set_TurnAround(bool value);
    bool get_OnlyMoveForward();
    void set_OnlyMoveForward(bool value);
    bool get_IsCurrentlyEnabled();
    void set_IsCurrentlyEnabled(bool value);
    void* get_ContactLeftMaterialSlot();
    void* get_ContactRightMaterialSlot();
    bool get_CameraActive();
    void set_CameraActive(bool value);
    bool get_SaveImmmediate();
    void set_SaveImmmediate(bool value);
    bool get_LeaveCameraActiveForward();
    void set_LeaveCameraActiveForward(bool value);
    bool get_LeaveCameraActiveReverse();
    void set_LeaveCameraActiveReverse(bool value);
    void* get_LVL_EarlyExitForward();
    void* get_LVL_EarlyExitReverse();
    float& get_CameraResetDelay();
    void* get_OriginalFaceTickOption();
    bool get_AutoMove();
    void set_AutoMove(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ShouldEnter(bool& Enter);
    void GetStartingBD1_AttachPoint(void*& AttachPoint);
    void AddPushUpOverProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddSqueezeOnLeftProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddSqueezeOnRightProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddHoleProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddQuickDuckProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddPullUpOverProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void ShouldDeactivateCamera(bool& DeactivateCamera);
    void ExitBuddyDroid();
    void InitBuddyDroid();
    void AddStepProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddSlopeProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddTurn45Proxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddStepUnderProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddSyncPoint(_Script_Engine::SceneComponent* Scene);
    void AddProxyMesh(_Script_CoreUObject::Transform RelativeTransform, _Script_Engine::SceneComponent* ParentScene, bool IsTouchSurface);
    void AddHighWallProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void LVL_DeactivateCamera(float OverrideBlendTime);
    void ActivateCamera();
    void InitMoveSequence();
    void PlaySyncAtSyncPoint(_Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, bool IsIdle, _Script_RsGameTechRT::RsSlaveSyncInstance*& SyncSlaveInstance);
    void PlayEnterAnim(_Script_RsGameTechRT::RsSlaveSyncInstance*& SyncSlaveInstance);
    void AddExitProxy(_Script_Engine::SceneComponent* ParentScene, _Script_Engine::SceneComponent*& NewParentScene);
    void BuildTunnelProxy(_Script_Engine::SceneComponent* ParentScene, float Length, float EndOffsetY, float EndOffsetZ, float TunnelWidth, float TotalWidth, float TunnelHeight, float TotalHeight, bool TouchWallOnLeft, _Script_Engine::SceneComponent*& NewParentScene);
    void GetIdleSync(_Script_RsGameTechRT::RsSyncDefinition*& IdleSync);
    void GetExitSync(_Script_RsGameTechRT::RsSyncDefinition*& ExitSync, void*& ExitCancelIdle);
    void GetMoveSync(_Script_RsGameTechRT::RsSyncDefinition*& MoveSync, void*& MoveEnum, void*& NextIdle, void*& CancelIdle);
    void GetEnterSync(_Script_RsGameTechRT::RsSyncDefinition*& EnterSync, void*& EnterEnum);
    void AddMoveProxy(_Script_Engine::SceneComponent* ParentScene, void* MoveType, _Script_Engine::SceneComponent*& NewParentScene);
    void AddEnterProxy(_Script_Engine::SceneComponent* ParentScene, _Script_Engine::SceneComponent*& NewParentScene);
    void BuildEditorProxyMesh(_Script_Engine::SceneComponent*& NewParentScene);
    void CheckInput(bool EarlyOut, bool& StepForward, bool& StepBackward);
    void UserConstructionScript0();
    void CheckEarlyOutTick__FinishedFunc();
    void CheckEarlyOutTick__UpdateFunc();
    void ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor);
    void ScriptedAnimEnd();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void Enter(_Script_RsGameTechRT::RsHero* Hero, bool Reverse);
    void PlayMove(bool Reverse);
    void Exit(bool Reverse);
    void BndEvt__CapsuleBackward_K2Node_ComponentBoundEvent_88_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ChooseNextAnim(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void PlayIdle();
    void StepForward();
    void StepBackward();
    void ExitEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void ReceiveBeginPlay0();
    void StopCheckEarlyOut();
    void MoveAnimComplete(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void PlayTurnAround(void* ToIdle);
    void LVL_Enable();
    void LVL_Disable();
    void ScriptedAnimNotify(void* NotifyName);
    void NavStateChange(void* NewState, void* PrevState);
    void EarlyOut();
    void EnterSyncStopped(bool bInterrupted);
    void UnbindEnterSyncStopped();
    void ReceiveTick0(float DeltaSeconds);
    void BndEvt__CapsuleForward_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void BndEvt__CapsuleBackward_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void AbortCameraReset();
    void LVL_AutoMove(bool AutoMove);
    void ExecuteUbergraph_BP_Claustrophobia(int32_t EntryPoint);
    void LVL_EarlyExitReverse__DelegateSignature();
    void LVL_EarlyExitForward__DelegateSignature();
    void LVL_ExitedAny__DelegateSignature();
    void LVL_ExitedReverse__DelegateSignature();
    void LVL_ExitedForward__DelegateSignature();
    void LVL_EnteredAny__DelegateSignature();
    void LVL_EnteredReverse__DelegateSignature();
    void LVL_EnteredForward__DelegateSignature();
}; // Size: 0x890
#pragma pack(pop)
}
