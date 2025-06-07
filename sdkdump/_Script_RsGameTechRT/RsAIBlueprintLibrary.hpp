#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct RsAIPatrolPath;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_RsGameTechRT {
struct RsAISystem;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_RsTechRT {
struct rsActor;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SpawnAIFromDefinition(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAICharacterDefinition* AICharacterDefinition, void*& OnAISpawnedDelegate, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation, _Script_Engine::Actor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh);
    void SetPatrolPath(_Script_RsGameTechRT::RsAIController* AIController, _Script_RsGameTechRT::RsAIPatrolPath* PatrolPath, void* MotionParm, void* PathUsage, void* ScriptingMode, void* ScriptingModeWhenDone, bool bSetEndToHomeLocation, bool bEnableCrowdAvoidance);
    void SetAIScriptingMode(_Script_RsGameTechRT::RsAIController* AIController, void* ScriptingMode);
    bool ScriptedMoveToLocation(_Script_RsGameTechRT::RsAICharacter* AICharacter, _Script_CoreUObject::Vector& MoveTargetLocation, void* MotionParmName, void* ScriptingMode, void* ScriptingModeWhenDone);
    bool ScriptedMoveToActor(_Script_RsGameTechRT::RsAICharacter* AICharacter, _Script_Engine::Actor* MoveTargetActor, void* MotionParmName, void* ScriptingMode, void* ScriptingModeWhenDone);
    bool PlayAlertedVO(_Script_RsGameTechRT::RsAICharacter* AICharacter);
    void MakeAISound(_Script_Engine::Actor* SourceActor, _Script_Engine::Actor* InstigatorActor, void* SoundType, bool bIsHostile);
    bool IsLastEnemy(_Script_CoreUObject::Object* WorldContext);
    bool IsInAIGameState(_Script_CoreUObject::Object* WorldContext, void* GameState);
    bool IsHostileTo(_Script_Engine::Actor* FirstActor, _Script_Engine::Actor* SecondActor);
    bool IsFriendlyTo(_Script_Engine::Actor* FirstActor, _Script_Engine::Actor* SecondActor);
    bool IsAlone(_Script_RsGameTechRT::RsAICharacter* AICharacter);
    float GetTeamStrength(_Script_RsGameTechRT::RsAICharacter* AICharacter);
    void* GetSubteamMembers(_Script_RsGameTechRT::RsAICharacter* AICharacter, bool bInclusive);
    _Script_RsGameTechRT::RsAIController* GetRsAIController(_Script_Engine::Actor* ControlledActor);
    void* GetRegisteredPOIsForCharacter(_Script_CoreUObject::Object* WorldContext, _Script_RsGameTechRT::RsAICharacter* AICharacter);
    void* GetRegisteredPOIs(_Script_CoreUObject::Object* WorldContext);
    void* GetPersistentCharacterSpawnersForLevelSequence(_Script_LevelSequence::LevelSequenceActor* LevelSequenceActor);
    _Script_RsGameTechRT::RsAISystem* GetAISystem(_Script_CoreUObject::Object* WorldContext);
    void* GetAIScriptingMode(_Script_RsGameTechRT::RsAIController* AIController);
    bool GetAIMoveTargetLocation(_Script_RsGameTechRT::RsAIController* AIController, _Script_CoreUObject::Vector& Location);
    bool GetAIMoveTargetActor(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::Actor*& Actor);
    _Script_RsGameTechRT::RsAIGameStateManager* GetAIGameStateManager(_Script_CoreUObject::Object* WorldContext);
    void* GetAIGameState(_Script_CoreUObject::Object* WorldContext);
    bool GetAIFocusTargetLocation(_Script_RsGameTechRT::RsAIController* AIController, _Script_CoreUObject::Vector& FocusLocation);
    void* GetAIClass(_Script_RsGameTechRT::RsAIController* AIController);
    void* GetAIAwarenessState(_Script_RsGameTechRT::RsAIController* AIController);
    bool GetAIAttackTargetLocation(_Script_RsGameTechRT::RsAIController* AIController, _Script_CoreUObject::Vector& Location);
    bool GetAIAttackTargetActor(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::Actor*& Actor);
    bool GetAIAttackTarget(_Script_Engine::Actor* ControlledActor, _Script_Engine::Actor*& TargetActor, _Script_CoreUObject::Vector& TargetLocation);
    void* FindAwarenessGroup(_Script_RsGameTechRT::RsAIController* AIController, void* CharacterType, float Radius);
    void* DebugGenerateSpawnShortcutText();
    void DebugEnableAI(_Script_CoreUObject::Object* WorldContext, bool bEnable);
    void ClearPatrolPath(_Script_RsGameTechRT::RsAIController* AIController);
    bool CheckCharacterOnScreenByCapsule(_Script_CoreUObject::Object* WorldContext, _Script_RsTechRT::rsActor* Character, bool bDebugDraw, float DebugDrawDuration);
    bool CanPlayAnimSequenceOnNavMesh(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::AnimSequence* Animation);
    bool CanPlayAnimMontageOnNavMesh(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::AnimMontage* Montage);
    float CalculateRootMotionDisplacement(_Script_Engine::AnimSequence* Sequence);
    _Script_CoreUObject::Vector2D CalculateAIBlendSpaceInput(_Script_RsGameTechRT::RsAIController* AIController, void* BlendSpaceType);
    void BecomeAwareOf(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::Actor* ActorToBeAwareOf);
}; // Size: 0x28
#pragma pack(pop)
}
