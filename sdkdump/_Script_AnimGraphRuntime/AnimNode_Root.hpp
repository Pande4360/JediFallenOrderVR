#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_Root : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x18]; public:
    void* get_Result();
    bool get_ExtractRoot();
    void set_ExtractRoot(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
