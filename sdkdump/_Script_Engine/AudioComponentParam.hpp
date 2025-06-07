#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioComponentParam {
    private: char pad_0[0x20]; public:
    void* get_ParamName();
    float& get_FloatParam();
    bool get_BoolParam();
    void set_BoolParam(bool value);
    int32_t& get_IntParam();
    _Script_Engine::SoundWave*& get_SoundWaveParam();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
