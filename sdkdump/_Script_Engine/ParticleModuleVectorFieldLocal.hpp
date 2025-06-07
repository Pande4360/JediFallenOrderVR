#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleVectorFieldBase.hpp"
namespace _Script_Engine {
struct VectorField;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleVectorFieldLocal : public ParticleModuleVectorFieldBase {
    private: char pad_30[0x38]; public:
    _Script_Engine::VectorField*& get_VectorField();
    void* get_RelativeTranslation();
    void* get_RelativeRotation();
    void* get_RelativeScale3D();
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
}; // Size: 0x68
#pragma pack(pop)
}
