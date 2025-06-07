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
namespace _Game_Characters__Shared_BehaviorTree_BTD_Chance {
#pragma pack(push, 1)
struct BTD_Chance_C : public _Script_AIModule::BTDecorator_BlueprintBase {
    private: char pad_a0[0x4]; public:
    int32_t& get_Chance();
    static _Script_CoreUObject::Class* static_class();
    bool PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
}; // Size: 0xa4
#pragma pack(pop)
}
