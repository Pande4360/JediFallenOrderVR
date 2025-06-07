#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTCompositeNode : public BTNode {
    private: char pad_58[0x38]; public:
    void* get_Children();
    void* get_Services();
    bool get_bApplyDecoratorScope();
    void set_bApplyDecoratorScope(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
