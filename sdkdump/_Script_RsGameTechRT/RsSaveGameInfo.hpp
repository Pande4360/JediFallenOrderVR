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
struct RsSaveGameInfo {
    private: char pad_0[0x98]; public:
    void* get_SaveName();
    void* get_PlanetName();
    void* get_StreamingDefinition();
    void* get_StreamingDefinitionPath();
    void* get_StreamingPlayerStartName();
    void* get_TimeSaved();
    void* get_TimeSavedText();
    void* get_SaveSlot();
    int32_t& get_Changelist();
    bool get_bCorrupt();
    void set_bCorrupt(bool value);
    void* get_MetaData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
