#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_AIModule {
struct BTCompositeNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTNode : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_NodeName();
    _Script_AIModule::BehaviorTree*& get_TreeAsset();
    _Script_AIModule::BTCompositeNode*& get_ParentNode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
