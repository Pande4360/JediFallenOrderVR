#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_NavigationSystem {
struct NavigationPath;
}
namespace _Script_AIModule {
struct BlackboardComponent;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_AIModule {
struct AIAsyncTaskBlueprintProxy;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIBlueprintHelperLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnlockAIResourcesWithAnimation(_Script_Engine::AnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    _Script_Engine::Pawn* SpawnAIFromClass(_Script_CoreUObject::Object* WorldContextObject, void* PawnClass, _Script_AIModule::BehaviorTree* BehaviorTree, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool bNoCollisionFail);
    void SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal);
    void SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal);
    void SendAIMessage(_Script_Engine::Pawn* Target, void* Message, _Script_CoreUObject::Object* MessageSource, bool bSuccess);
    void LockAIResourcesWithAnimation(_Script_Engine::AnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    bool IsValidAIRotation(_Script_CoreUObject::Rotator Rotation);
    bool IsValidAILocation(_Script_CoreUObject::Vector Location);
    bool IsValidAIDirection(_Script_CoreUObject::Vector DirectionVector);
    _Script_NavigationSystem::NavigationPath* GetCurrentPath(_Script_Engine::Controller* Controller);
    _Script_AIModule::BlackboardComponent* GetBlackboard(_Script_Engine::Actor* Target);
    _Script_AIModule::AIController* GetAIController(_Script_Engine::Actor* ControlledActor);
    _Script_AIModule::AIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Pawn* Pawn, _Script_CoreUObject::Vector Destination, _Script_Engine::Actor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
}; // Size: 0x28
#pragma pack(pop)
}
