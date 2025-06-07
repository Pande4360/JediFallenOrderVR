#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithStaticMeshTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x78]; public:
    void* get_SectionInfoMap();
    int32_t& get_LightMapCoordinateIndex();
    int32_t& get_LightMapResolution();
    void* get_BuildSettings();
    void* get_StaticMaterials();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
