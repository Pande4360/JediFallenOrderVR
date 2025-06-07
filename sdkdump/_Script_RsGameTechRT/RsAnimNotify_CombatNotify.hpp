#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotify_CombatNotify : public _Script_Engine::AnimNotify {
    private: char pad_38[0x10]; public:
    void* get_Identifier();
    void* get_CombatFuncNameComplete();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
