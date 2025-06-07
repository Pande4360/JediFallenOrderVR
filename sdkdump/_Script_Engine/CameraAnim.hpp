#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct InterpGroup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraAnim : public _Script_CoreUObject::Object {
    private: char pad_28[0x558]; public:
    _Script_Engine::InterpGroup*& get_CameraInterpGroup();
    float& get_AnimLength();
    void* get_BoundingBox();
    bool get_bRelativeToInitialTransform();
    void set_bRelativeToInitialTransform(bool value);
    bool get_bRelativeToInitialFOV();
    void set_bRelativeToInitialFOV(bool value);
    float& get_BaseFOV();
    void* get_BasePostProcessSettings();
    float& get_BasePostProcessBlendWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x580
#pragma pack(pop)
}
