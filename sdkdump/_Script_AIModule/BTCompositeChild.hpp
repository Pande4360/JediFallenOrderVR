#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct BTCompositeNode;
}
namespace _Script_AIModule {
struct BTTaskNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTCompositeChild {
    private: char pad_0[0x30]; public:
    _Script_AIModule::BTCompositeNode*& get_ChildComposite();
    _Script_AIModule::BTTaskNode*& get_ChildTask();
    void* get_Decorators();
    void* get_DecoratorOps();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
