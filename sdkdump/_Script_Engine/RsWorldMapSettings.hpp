#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsWorldMapSettings : public DeveloperSettings {
    private: char pad_38[0x2a8]; public:
    void* get_WorldMapStreamingAreas();
    void* get_LocationNameDefinesPtr();
    void* get_WorldMapDefinitionAssetRefs();
    void* get_UserDefinedMapSectionMeshTypes();
    void* get_UserDefinedGatewayTypes();
    void* get_Exporter_SublevelStringSearchPatterns();
    void* get_WhiteListSublevelSearchPatterns();
    void* get_BlackListSublevelSearchPatterns();
    void* get_LevelsToForceLoad();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e0
#pragma pack(pop)
}
