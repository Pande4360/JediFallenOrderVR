#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsStreamingDefinition : public DataAsset {
    private: char pad_30[0xa0]; public:
    bool get_bIsStatic();
    void set_bIsStatic(bool value);
    bool get_bIsLevelContainer();
    void set_bIsLevelContainer(bool value);
    void* get_LevelColor();
    void* get_LODs();
    void* get_LevelsToLoadAfter();
    void* get_StreamingAreas();
    void* get_AudioBanksToLoad();
    void* get_StreamingSubLevelDefinitions();
    void* get_LevelName();
    void* get_LevelPackageName();
    void* get_WorldAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
