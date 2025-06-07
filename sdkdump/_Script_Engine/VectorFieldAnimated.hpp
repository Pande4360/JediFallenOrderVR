#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "VectorField.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct VectorFieldStatic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VectorFieldAnimated : public VectorField {
    private: char pad_48[0x40]; public:
    _Script_Engine::Texture2D*& get_Texture();
    void* get_ConstructionOp();
    int32_t& get_VolumeSizeX();
    int32_t& get_VolumeSizeY();
    int32_t& get_VolumeSizeZ();
    int32_t& get_SubImagesX();
    int32_t& get_SubImagesY();
    int32_t& get_FrameCount();
    float& get_FramesPerSecond();
    bool get_bLoop();
    void set_bLoop(bool value);
    _Script_Engine::VectorFieldStatic*& get_NoiseField();
    float& get_NoiseScale();
    float& get_NoiseMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
