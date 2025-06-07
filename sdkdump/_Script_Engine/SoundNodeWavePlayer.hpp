#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNodeAssetReferencer.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeWavePlayer : public SoundNodeAssetReferencer {
    private: char pad_38[0x38]; public:
    void* get_SoundWaveAssetPtr();
    _Script_Engine::SoundWave*& get_SoundWave();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
