#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint {
#pragma pack(push, 1)
struct BTS_DrawDebugPoint_C : public _Script_AIModule::BTService_BlueprintBase {
    private: char pad_98[0x38]; public:
    void* get_UberGraphFrame();
    void* get_debugLoc();
    bool get_Enabled();
    void set_Enabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveSearchStart0(_Script_Engine::Actor* OwnerActor);
    void ExecuteUbergraph_BTS_DrawDebugPoint(int32_t EntryPoint);
}; // Size: 0xd0
#pragma pack(pop)
}
