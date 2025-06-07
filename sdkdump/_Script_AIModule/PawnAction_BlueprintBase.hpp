#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PawnAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnAction_BlueprintBase : public PawnAction {
    static _Script_CoreUObject::Class* static_class();
    void ActionTick(_Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(_Script_Engine::Pawn* ControlledPawn);
    void ActionResume(_Script_Engine::Pawn* ControlledPawn);
    void ActionPause(_Script_Engine::Pawn* ControlledPawn);
    void ActionFinished(_Script_Engine::Pawn* ControlledPawn, void* WithResult);
}; // Size: 0x98
#pragma pack(pop)
}
