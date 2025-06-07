#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTaskNode.hpp"
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
struct BTTask_BlueprintBase : public BTTaskNode {
    private: char pad_70[0x30]; public:
    _Script_AIModule::AIController*& get_AIOwner();
    _Script_Engine::Actor*& get_ActorOwner();
    bool get_bShowPropertyDetails();
    void set_bShowPropertyDetails(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetFinishOnMessageWithId(void* MessageName, int32_t RequestID);
    void SetFinishOnMessage(void* MessageName);
    void ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveExecute(_Script_Engine::Actor* OwnerActor);
    void ReceiveAbortAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveAbort(_Script_Engine::Actor* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
}; // Size: 0xa0
#pragma pack(pop)
}
