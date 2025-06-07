#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTService.hpp"
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
struct BTService_BlueprintBase : public BTService {
    private: char pad_70[0x28]; public:
    _Script_AIModule::AIController*& get_AIOwner();
    _Script_Engine::Actor*& get_ActorOwner();
    bool get_bShowPropertyDetails();
    void set_bShowPropertyDetails(bool value);
    bool get_bShowEventDetails();
    void set_bShowEventDetails(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveSearchStart(_Script_Engine::Actor* OwnerActor);
    void ReceiveDeactivationAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveDeactivation(_Script_Engine::Actor* OwnerActor);
    void ReceiveActivationAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ReceiveActivation(_Script_Engine::Actor* OwnerActor);
    bool IsServiceActive();
}; // Size: 0x98
#pragma pack(pop)
}
