#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AIModule {
struct BTCompositeNode;
}
namespace _Script_AIModule {
struct BlackboardData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BehaviorTree : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    _Script_AIModule::BTCompositeNode*& get_RootNode();
    _Script_AIModule::BlackboardData*& get_BlackboardAsset();
    void* get_RootDecorators();
    void* get_RootDecoratorOps();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
