#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow {
#pragma pack(push, 1)
struct BTS_BuddyFollow_C : public _Script_AIModule::BTService_BlueprintBase {
    private: char pad_98[0x68]; public:
    void* get_UberGraphFrame();
    void* get_TargetToFollow();
    void* get_TargetLocation();
    float& get_followRadius();
    _Script_Engine::Pawn*& get_BuddyDroidPawn();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_BuddyFollow(int32_t EntryPoint);
}; // Size: 0x100
#pragma pack(pop)
}
