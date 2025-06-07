#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached {
#pragma pack(push, 1)
struct BTS_CheckPOIWhileAttached_C : public _Script_AIModule::BTService_BlueprintBase {
    private: char pad_98[0x98]; public:
    void* get_UberGraphFrame();
    void* get_POI();
    float& get_detachRadius();
    _Script_SwGame::SwAIBuddyDroid*& get_BuddyDroid_REF();
    float& get_senseRadius();
    void* get_attachPointOverride();
    void* get_canBuddyDetach();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_CheckPOIWhileAttached(int32_t EntryPoint);
}; // Size: 0x130
#pragma pack(pop)
}
