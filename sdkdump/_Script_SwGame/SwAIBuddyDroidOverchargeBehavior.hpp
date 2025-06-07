#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIBuddyDroidOverchargeBehavior {
    private: char pad_0[0x28]; public:
    void* get_Type();
    void* get_BehaviorTreeAsset();
    _Script_AIModule::BehaviorTree*& get_BehaviorTree();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
