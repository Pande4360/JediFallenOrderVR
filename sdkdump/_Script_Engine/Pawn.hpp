#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PawnMovementComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Pawn : public Actor {
    private: char pad_360[0x60]; public:
    bool get_bUseControllerRotationPitch();
    void set_bUseControllerRotationPitch(bool value);
    bool get_bUseControllerRotationYaw();
    void set_bUseControllerRotationYaw(bool value);
    bool get_bUseControllerRotationRoll();
    void set_bUseControllerRotationRoll(bool value);
    bool get_bCanAffectNavigationGeneration();
    void set_bCanAffectNavigationGeneration(bool value);
    float& get_BaseEyeHeight();
    void* get_AutoPossessPlayer();
    void* get_AutoPossessAI();
    void* get_RemoteViewPitch();
    void* get_AIControllerClass();
    _Script_Engine::PlayerState*& get_PlayerState();
    _Script_Engine::Controller*& get_LastHitBy();
    _Script_Engine::Controller*& get_Controller();
    void* get_ControlInputVector();
    void* get_LastControlInputVector();
    static _Script_CoreUObject::Class* static_class();
    void SpawnDefaultController();
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    void ReceiveUnpossessed(_Script_Engine::Controller* OldController);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void PawnMakeNoise(float Loudness, _Script_CoreUObject::Vector NoiseLocation, bool bUseNoiseMakerLocation, _Script_Engine::Actor* NoiseMaker);
    void OnRep_PlayerState();
    void OnRep_Controller();
    void LaunchPawn(_Script_CoreUObject::Vector LaunchVelocity, bool bXYOverride, bool bZOverride);
    _Script_CoreUObject::Vector K2_GetMovementInputVector();
    bool IsPlayerControlled();
    bool IsMoveInputIgnored();
    bool IsLocallyControlled();
    bool IsControlled();
    _Script_CoreUObject::Vector GetPendingMovementInputVector();
    _Script_CoreUObject::Vector GetNavAgentLocation();
    _Script_Engine::PawnMovementComponent* GetMovementComponent();
    _Script_Engine::Actor* GetMovementBaseActor(_Script_Engine::Pawn* Pawn);
    _Script_CoreUObject::Vector GetLastMovementInputVector();
    _Script_CoreUObject::Rotator GetControlRotation();
    _Script_Engine::Controller* GetController();
    _Script_CoreUObject::Rotator GetBaseAimRotation();
    void DetachFromControllerPendingDestroy();
    _Script_CoreUObject::Vector ConsumeMovementInputVector();
    void AddMovementInput(_Script_CoreUObject::Vector WorldDirection, float ScaleValue, bool bForce);
    void AddControllerYawInput(float Val);
    void AddControllerRollInput(float Val);
    void AddControllerPitchInput(float Val);
}; // Size: 0x3c0
#pragma pack(pop)
}
