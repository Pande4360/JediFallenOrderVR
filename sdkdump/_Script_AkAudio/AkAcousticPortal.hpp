#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAcousticPortal : public _Script_Engine::Volume {
    private: char pad_398[0x90]; public:
    void* get_InitialState();
    float& get_ObstructionRefreshInterval();
    void* get_ObstructionCollisionChannel();
    static _Script_CoreUObject::Class* static_class();
    void OpenPortal();
    void* GetCurrentState();
    void ClosePortal();
}; // Size: 0x428
#pragma pack(pop)
}
