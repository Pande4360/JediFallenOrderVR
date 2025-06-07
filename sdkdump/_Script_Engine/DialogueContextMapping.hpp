#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
struct DialogueSoundWaveProxy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DialogueContextMapping {
    private: char pad_0[0x38]; public:
    void* get_Context();
    _Script_Engine::SoundWave*& get_SoundWave();
    void* get_LocalizationKeyFormat();
    _Script_Engine::DialogueSoundWaveProxy*& get_Proxy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
