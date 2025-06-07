#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Characters__Shared_BehaviorTree_BTD_OnScreenCheck {
#pragma pack(push, 1)
struct BTD_OnScreenCheck_C : public _Script_AIModule::BTDecorator_BlueprintBase {
    static _Script_CoreUObject::Class* static_class();
    bool PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
}; // Size: 0xa0
#pragma pack(pop)
}
