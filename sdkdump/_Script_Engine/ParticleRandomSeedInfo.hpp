#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleRandomSeedInfo {
    private: char pad_0[0x20]; public:
    void* get_ParameterName();
    bool get_bGetSeedFromInstance();
    void set_bGetSeedFromInstance(bool value);
    bool get_bInstanceSeedIsIndex();
    void set_bInstanceSeedIsIndex(bool value);
    bool get_bResetSeedOnEmitterLooping();
    void set_bResetSeedOnEmitterLooping(bool value);
    bool get_bRandomlySelectSeedArray();
    void set_bRandomlySelectSeedArray(bool value);
    void* get_RandomSeeds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
