#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct SCS_Node;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SimpleConstructionScript : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    void* get_RootNodes();
    void* get_AllNodes();
    _Script_Engine::SCS_Node*& get_DefaultSceneRootNode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
