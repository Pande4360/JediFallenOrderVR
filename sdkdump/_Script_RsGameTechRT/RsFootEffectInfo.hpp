#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsFootEffectInfo : public _Script_Engine::TableRowBase {
    private: char pad_8[0x270]; public:
    void* get_Walk();
    void* get_Jog();
    void* get_run();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x278
#pragma pack(pop)
}
