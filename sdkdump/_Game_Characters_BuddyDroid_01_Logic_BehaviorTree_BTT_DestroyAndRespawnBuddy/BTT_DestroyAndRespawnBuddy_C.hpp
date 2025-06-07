#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTask_BlueprintBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_DestroyAndRespawnBuddy {
#pragma pack(push, 1)
struct BTT_DestroyAndRespawnBuddy_C : public _Script_AIModule::BTTask_BlueprintBase {
    private: char pad_a0[0x10]; public:
    void* get_UberGraphFrame();
    void* get_BuddyState();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveExecuteAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn);
    void ExecuteUbergraph_BTT_DestroyAndRespawnBuddy(int32_t EntryPoint);
}; // Size: 0xb0
#pragma pack(pop)
}
