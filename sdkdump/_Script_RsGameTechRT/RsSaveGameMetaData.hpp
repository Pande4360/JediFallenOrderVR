#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSaveGameMetaData {
    private: char pad_0[0x28]; public:
    void* get_PlanetRegion();
    int32_t& get_Difficulty();
    void* get_ElapsedPlayTime();
    float& get_PercentComplete();
    bool get_bMainStoryComplete();
    void set_bMainStoryComplete(bool value);
    bool get_bIsNewGamePlus();
    void set_bIsNewGamePlus(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
