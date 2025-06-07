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
struct DatasmithCineCameraComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x68]; public:
    void* get_FilmbackSettings();
    void* get_LensSettings();
    void* get_FocusSettings();
    float& get_CurrentFocalLength();
    float& get_CurrentAperture();
    void* get_PostProcessSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
