#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Texture : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    void* get_LightingGuid();
    int32_t& get_LODBias();
    int32_t& get_NumCinematicMipLevels();
    void* get_CompressionSettings();
    void* get_Filter();
    void* get_LODGroup();
    bool get_SRGB();
    void set_SRGB(bool value);
    bool get_NeverStream();
    void set_NeverStream(bool value);
    bool get_bNoTiling();
    void set_bNoTiling(bool value);
    bool get_bUseCinematicMipLevels();
    void set_bUseCinematicMipLevels(bool value);
    bool get_bAsyncResourceReleaseHasBeenStarted();
    void set_bAsyncResourceReleaseHasBeenStarted(bool value);
    int32_t& get_CachedCombinedLODBias();
    void* get_AssetUserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
