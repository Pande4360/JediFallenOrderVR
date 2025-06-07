#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructibleActor : public _Script_Engine::Actor {
    private: char pad_360[0x3f0]; public:
    bool get_DestructionDisabled();
    void set_DestructionDisabled(bool value);
    bool get_TakeDamageAcceptedOnlyFromHero();
    void set_TakeDamageAcceptedOnlyFromHero(bool value);
    bool get_TakeDamageMethodNeverAccepted();
    void set_TakeDamageMethodNeverAccepted(bool value);
    bool get_SetToForceIgnoredWhenDestroyed();
    void set_SetToForceIgnoredWhenDestroyed(bool value);
    void* get_ParallelStates();
    void* get_SaveGameType();
    void* get_DestructionPhases();
    void* get_DestructiblePieces();
    void* get_DestructiblePiecesCommonPhysicsParameters();
    void* get_CommonAudioParameters();
    void* get_CommonOptimizationParameters();
    void* get_CommonReactionOnCharacterOverlap();
    bool get_DebugLogDestruction();
    void set_DebugLogDestruction(bool value);
    bool get_DebugLogSleepingStateForAllRigidBodies();
    void set_DebugLogSleepingStateForAllRigidBodies(bool value);
    void* get_OnPhaseDestructedEvent();
    void* get_OnLastPhaseDestructedEvent();
    bool get_NeverDisableTick();
    void set_NeverDisableTick(bool value);
    void* get_m_SaveGameState();
    static _Script_CoreUObject::Class* static_class();
    void OnPhaseDestructed(int32_t PhaseIndex);
    void OnLastPhaseDestructed();
    bool IsFullyDestroyed(_Script_Engine::Actor* DestructibleActor);
    void HandleOnComponentHit(_Script_Engine::PrimitiveComponent* HitComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void HandleOnComponentEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void HandleOnComponentBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void* GetCurrentActiveParallelState();
    void FullyDestroyDestructible(_Script_Engine::Actor* destructibleActorToFullyDestroy, _Script_CoreUObject::Vector DestructionCenterPosition, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
}; // Size: 0x750
#pragma pack(pop)
}
