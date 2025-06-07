#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSurfaceEffect : public _Script_Engine::TableRowBase {
    private: char pad_8[0xc8]; public:
    void* get_DecalMaterial();
    _Script_Engine::MaterialInterface*& get_DecalMaterialPtr();
    float& get_DecalSize();
    float& get_DecalRandomSizeMax();
    float& get_DecalRandomRotationMax();
    void* get_DecalOffset();
    float& get_DecalFadeStartDelay();
    float& get_DecalFadeDuration();
    float& get_DecalRampUpTime();
    void* get_ParticleEffect();
    _Script_Engine::ParticleSystem*& get_ParticleEffectPtr();
    void* get_ParticleOffset();
    void* get_DynamicDeformer();
    void* get_DynamicDeformerPtr();
    void* get_DynamicDeformerOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
