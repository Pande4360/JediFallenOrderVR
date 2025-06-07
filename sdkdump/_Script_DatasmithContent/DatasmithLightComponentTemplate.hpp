#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureLightProfile;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithLightComponentTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x38]; public:
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_CastShadows();
    void set_CastShadows(bool value);
    bool get_bUseTemperature();
    void set_bUseTemperature(bool value);
    bool get_bUseIESBrightness();
    void set_bUseIESBrightness(bool value);
    float& get_Intensity();
    float& get_Temperature();
    float& get_IESBrightnessScale();
    void* get_LightColor();
    _Script_Engine::MaterialInterface*& get_LightFunctionMaterial();
    _Script_Engine::TextureLightProfile*& get_IESTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
