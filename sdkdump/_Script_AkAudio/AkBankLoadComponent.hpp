#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkBankLoadComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x18]; public:
    void* get_Banks();
    bool get_bAsyncLoad();
    void set_bAsyncLoad(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
