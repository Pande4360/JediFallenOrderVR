#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTaskNode.hpp"
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_RunBehaviorDynamic : public BTTaskNode {
    private: char pad_70[0x20]; public:
    void* get_InjectionTag();
    _Script_AIModule::BehaviorTree*& get_DefaultBehaviorAsset();
    _Script_AIModule::BehaviorTree*& get_BehaviorAsset();
    _Script_CoreUObject::Object*& get_InjectionContextObject();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
