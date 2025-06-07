#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Pawn.hpp"
#include "RootMotionSourceGroup.hpp"
#include "Vector_NetQuantize10.hpp"
#include "Vector_NetQuantize100.hpp"
#include "Vector_NetQuantizeNormal.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct CharacterMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Character : public Pawn {
    private: char pad_3c0[0x3c0]; public:
    _Script_Engine::SkeletalMeshComponent*& get_Mesh();
    _Script_Engine::CharacterMovementComponent*& get_CharacterMovement();
    _Script_Engine::CapsuleComponent*& get_CapsuleComponent();
    void* get_BasedMovement();
    void* get_ReplicatedBasedMovement();
    float& get_AnimRootMotionTranslationScale();
    void* get_BaseTranslationOffset();
    void* get_BaseRotationOffset();
    float& get_ReplicatedServerLastTransformUpdateTimeStamp();
    float& get_ReplayLastTransformUpdateTimeStamp();
    void* get_ReplicatedMovementMode();
    bool get_bInBaseReplication();
    void set_bInBaseReplication(bool value);
    float& get_CrouchedEyeHeight();
    bool get_bIsCrouched();
    void set_bIsCrouched(bool value);
    bool get_bProxyIsJumpForceApplied();
    void set_bProxyIsJumpForceApplied(bool value);
    bool get_bPressedJump();
    void set_bPressedJump(bool value);
    bool get_bClientUpdating();
    void set_bClientUpdating(bool value);
    bool get_bClientWasFalling();
    void set_bClientWasFalling(bool value);
    bool get_bClientResimulateRootMotion();
    void set_bClientResimulateRootMotion(bool value);
    bool get_bClientResimulateRootMotionSources();
    void set_bClientResimulateRootMotionSources(bool value);
    bool get_bSimGravityDisabled();
    void set_bSimGravityDisabled(bool value);
    bool get_bClientCheckEncroachmentOnNetUpdate();
    void set_bClientCheckEncroachmentOnNetUpdate(bool value);
    bool get_bServerMoveIgnoreRootMotion();
    void set_bServerMoveIgnoreRootMotion(bool value);
    bool get_bWasJumping();
    void set_bWasJumping(bool value);
    float& get_JumpKeyHoldTime();
    float& get_JumpForceTimeRemaining();
    float& get_ProxyJumpForceStartedTime();
    float& get_JumpMaxHoldTime();
    int32_t& get_JumpMaxCount();
    int32_t& get_JumpCurrentCount();
    void* get_OnReachedJumpApex();
    void* get_MovementModeChangedDelegate();
    void* get_OnCharacterMovementUpdated();
    void* get_SavedRootMotion();
    void* get_ClientRootMotionParams();
    void* get_RootMotionRepMoves();
    void* get_RepRootMotion();
    void* get_CurrentSignificance();
    bool get_bManageSignificance();
    void set_bManageSignificance(bool value);
    float& get_SignificanceMultiplier();
    static _Script_CoreUObject::Class* static_class();
    void UnCrouch(bool bClientSimulation);
    void StopJumping();
    void StopAnimMontage(_Script_Engine::AnimMontage* AnimMontage);
    bool ShouldManageSignificance();
    void ServerMoveOld(float OldTimeStamp, _Script_Engine::Vector_NetQuantize10 OldAccel, void* OldMoveFlags);
    void ServerMoveNoBase(float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* CompressedMoveFlags, void* ClientRoll, void* View, void* ClientMovementMode);
    void ServerMoveDualNoBase(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, void* ClientMovementMode);
    void ServerMoveDualHybridRootMotion(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode);
    void ServerMoveDual(float TimeStamp0, _Script_Engine::Vector_NetQuantize10 InAccel0, void* PendingFlags, void* View0, float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* NewFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode);
    void ServerMove(float Timestamp, _Script_Engine::Vector_NetQuantize10 InAccel, _Script_Engine::Vector_NetQuantize100 ClientLoc, void* CompressedMoveFlags, void* ClientRoll, void* View, _Script_Engine::PrimitiveComponent* ClientMovementBase, void* ClientBaseBoneName, void* ClientMovementMode);
    void RootMotionDebugClientPrintOnScreen(void* inString);
    float PlayAnimMontage(_Script_Engine::AnimMontage* AnimMontage, float InPlayRate, void* StartSectionName);
    void OnWalkingOffLedge(_Script_CoreUObject::Vector& PreviousFloorImpactNormal, _Script_CoreUObject::Vector& PreviousFloorContactNormal, _Script_CoreUObject::Vector& PreviousLocation, float TimeDelta);
    void OnRep_RootMotion();
    void OnRep_ReplicatedBasedMovement();
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    void OnRep_IsCrouched();
    void OnLaunched(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void OnLanded(_Script_Engine::HitResult& Hit);
    void OnJumped();
    void LaunchCharacter(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void K2_UpdateCustomMovement(float DeltaTime);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(void* PrevMovementMode, void* NewMovementMode, void* PrevCustomMode, void* NewCustomMode);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jump();
    bool IsPlayingRootMotion();
    bool IsPlayingNetworkedRootMotionMontage();
    bool IsJumpProvidingForce();
    float GetSignificanceMultiplier();
    void* GetCurrentSignificance();
    _Script_Engine::AnimMontage* GetCurrentMontage();
    _Script_CoreUObject::Vector GetBaseTranslationOffset();
    _Script_CoreUObject::Rotator GetBaseRotationOffsetRotator();
    float GetAnimRootMotionTranslationScale();
    void Crouch(bool bClientSimulation);
    void ClientVeryShortAdjustPosition(float Timestamp, _Script_CoreUObject::Vector NewLoc, _Script_Engine::PrimitiveComponent* NewBase, void* NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode);
    void ClientCheatWalk();
    void ClientCheatGhost();
    void ClientCheatFly();
    void ClientAdjustRootMotionSourcePosition(float Timestamp, _Script_Engine::RootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, _Script_CoreUObject::Vector ServerLoc, _Script_Engine::Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, _Script_Engine::PrimitiveComponent* ServerBase, void* ServerBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode);
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, _Script_CoreUObject::Vector ServerLoc, _Script_Engine::Vector_NetQuantizeNormal ServerRotation, float ServerVelZ, _Script_Engine::PrimitiveComponent* ServerBase, void* ServerBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode);
    void ClientAdjustPosition(float Timestamp, _Script_CoreUObject::Vector NewLoc, _Script_CoreUObject::Vector NewVel, _Script_Engine::PrimitiveComponent* NewBase, void* NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, void* ServerMovementMode);
    void ClientAckGoodMove(float Timestamp);
    bool CanJumpInternal();
    bool CanJump();
    void CacheInitialMeshOffset(_Script_CoreUObject::Vector MeshRelativeLocation, _Script_CoreUObject::Rotator MeshRelativeRotation);
}; // Size: 0x780
#pragma pack(pop)
}
