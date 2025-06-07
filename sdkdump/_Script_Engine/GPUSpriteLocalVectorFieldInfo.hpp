#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct VectorField;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GPUSpriteLocalVectorFieldInfo {
    private: char pad_0[0x70]; public:
    _Script_Engine::VectorField*& get_Field();
    void* get_Transform();
    void* get_MinInitialRotation();
    void* get_MaxInitialRotation();
    void* get_RotationRate();
    float& get_Intensity();
    float& get_Tightness();
    bool get_bIgnoreComponentTransform();
    void set_bIgnoreComponentTransform(bool value);
    bool get_bTileX();
    void set_bTileX(bool value);
    bool get_bTileY();
    void set_bTileY(bool value);
    bool get_bTileZ();
    void set_bTileZ(bool value);
    bool get_bUseFixDT();
    void set_bUseFixDT(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
