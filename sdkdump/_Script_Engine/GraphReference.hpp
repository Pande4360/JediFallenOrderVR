#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct EdGraph;
}
namespace _Script_Engine {
struct Blueprint;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GraphReference {
    private: char pad_0[0x20]; public:
    _Script_Engine::EdGraph*& get_MacroGraph();
    _Script_Engine::Blueprint*& get_GraphBlueprint();
    void* get_GraphGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
