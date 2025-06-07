#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct EdGraphNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Breakpoint : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    _Script_Engine::EdGraphNode*& get_Node();
    bool get_bStepOnce();
    void set_bStepOnce(bool value);
    bool get_bStepOnce_WasPreviouslyDisabled();
    void set_bStepOnce_WasPreviouslyDisabled(bool value);
    bool get_bStepOnce_RemoveAfterHit();
    void set_bStepOnce_RemoveAfterHit(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
