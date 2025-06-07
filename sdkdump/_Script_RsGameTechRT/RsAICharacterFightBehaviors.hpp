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
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacterFightBehaviors {
    private: char pad_0[0x10]; public:
    _Script_AIModule::BehaviorTree*& get_ActiveBehavior();
    _Script_AIModule::BehaviorTree*& get_PassiveBehavior();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
