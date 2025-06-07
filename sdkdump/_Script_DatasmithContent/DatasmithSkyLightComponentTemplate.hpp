#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithSkyLightComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x10]; public:
    void* get_SourceType();
    int32_t& get_CubemapResolution();
    _Script_Engine::TextureCube*& get_Cubemap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
