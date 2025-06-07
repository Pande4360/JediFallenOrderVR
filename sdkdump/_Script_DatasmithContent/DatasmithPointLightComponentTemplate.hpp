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
struct DatasmithPointLightComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x10]; public:
    void* get_IntensityUnits();
    float& get_SourceRadius();
    float& get_SourceLength();
    float& get_AttenuationRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
