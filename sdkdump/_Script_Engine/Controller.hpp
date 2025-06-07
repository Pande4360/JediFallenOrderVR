#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Character;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Controller : public Actor {
    private: char pad_360[0x80]; public:
    _Script_Engine::PlayerState*& get_PlayerState();
    void* get_OnInstigatedAnyDamage();
    void* get_StateName();
    _Script_Engine::Pawn*& get_Pawn();
    _Script_Engine::Character*& get_Character();
    _Script_Engine::SceneComponent*& get_TransformComponent();
    void* get_ControlRotation();
    bool get_bAttachToPawn();
    void set_bAttachToPawn(bool value);
    bool get_bIsPlayerController();
    void set_bIsPlayerController(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UnPossess();
    void StopMovement();
    void SetInitialLocationAndRotation(_Script_CoreUObject::Vector& NewLocation, _Script_CoreUObject::Rotator& NewRotation);
    void SetIgnoreMoveInput(bool bNewMoveInput);
    void SetIgnoreLookInput(bool bNewLookInput);
    void SetControlRotation(_Script_CoreUObject::Rotator& NewRotation);
    void ResetIgnoreMoveInput();
    void ResetIgnoreLookInput();
    void ResetIgnoreInputFlags();
    void ReceiveInstigatedAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void Possess(_Script_Engine::Pawn* InPawn);
    void OnRep_PlayerState();
    void OnRep_Pawn();
    bool LineOfSightTo(_Script_Engine::Actor* Other, _Script_CoreUObject::Vector ViewPoint, bool bAlternateChecks);
    _Script_Engine::Pawn* K2_GetPawn();
    bool IsPlayerController();
    bool IsMoveInputIgnored();
    bool IsLookInputIgnored();
    bool IsLocalPlayerController();
    bool IsLocalController();
    _Script_Engine::Actor* GetViewTarget();
    _Script_CoreUObject::Rotator GetDesiredRotation();
    _Script_CoreUObject::Rotator GetControlRotation();
    void ClientSetRotation(_Script_CoreUObject::Rotator NewRotation, bool bResetCamera);
    void ClientSetLocation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation);
    _Script_Engine::PlayerController* CastToPlayerController();
}; // Size: 0x3e0
#pragma pack(pop)
}
