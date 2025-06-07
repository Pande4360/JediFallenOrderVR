#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_BlueprintBase : public BTDecorator {
    private: char pad_68[0x38]; public:
    _Script_AIModule::AIController*& get_AIOwner();
    _Script_Engine::Actor*& get_ActorOwner();
    void* get_ObservedKeyNames();
    bool get_bShowPropertyDetails();
    void set_bShowPropertyDetails(bool value);
    bool get_bCheckConditionOnlyBlackBoardChanges();
    void set_bCheckConditionOnlyBlackBoardChanges(bool value);
    bool get_bIsObservingBB();
    void set_bIsObservingBB(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveObserverDeactivated(_Script_Engine::Actor* OwnerActor);
    void ReceiveObserverActivatedAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveObserverActivated(_Script_Engine::Actor* OwnerActor);
    void ReceiveExecutionStartAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveExecutionStart(_Script_Engine::Actor* OwnerActor);
    void ReceiveExecutionFinishAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, void* NodeResult);
    void ReceiveExecutionFinish(_Script_Engine::Actor* OwnerActor, void* NodeResult);
    bool PerformConditionCheckAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    bool PerformConditionCheck(_Script_Engine::Actor* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
}; // Size: 0xa0
#pragma pack(pop)
}
