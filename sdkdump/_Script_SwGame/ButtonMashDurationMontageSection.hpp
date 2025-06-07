#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ButtonMashType.hpp"
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct ButtonMashDurationMontageSection : public ButtonMashType {
    private: char pad_30[0x10]; public:
    _Script_Engine::AnimMontage*& get_Montage();
    void* get_MontageSection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
