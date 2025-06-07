#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAISystem;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIGameStateManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x190]; public:
    void* get_OnGameStateChangedEvent();
    void* get_OnCombatantDiedEvent();
    void* get_OnTranquilityAchievedEvent();
    void* get_OnPlayerVictoryEvent();
    static _Script_CoreUObject::Class* static_class();
    void OnTakeAnyOrNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag);
    void OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void OnAttackTargetChanged(_Script_RsGameTechRT::RsAIController* AIController);
    void OnAIUninitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController);
    void OnAIInitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController);
    void OnAIDied(_Script_Engine::Actor* DeadActor);
    void OnAIDestroyed(_Script_Engine::Actor* DestroyedActor);
    bool IsTranquil();
    int32_t GetNumTotalCombatants();
    int32_t GetNumCombatantsKilledByPlayer();
    int32_t GetNumCombatantsKilled();
    int32_t GetNumAliveCombatants();
    int32_t GetNumAIAttackingPlayer();
    void* GetGameState();
}; // Size: 0x1b8
#pragma pack(pop)
}
