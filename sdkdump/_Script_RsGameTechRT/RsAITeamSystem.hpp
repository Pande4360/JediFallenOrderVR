#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAITeamSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x258]; public:
    _Script_AIModule::BehaviorTree*& get_TeamRootBehavior();
    void* get_Teams();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
