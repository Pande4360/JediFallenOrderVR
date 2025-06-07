#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EdGraphSchemaAction.hpp"
namespace _Script_Engine {
struct EdGraphNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraphSchemaAction_NewNode : public EdGraphSchemaAction {
    private: char pad_100[0x8]; public:
    _Script_Engine::EdGraphNode*& get_NodeTemplate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
