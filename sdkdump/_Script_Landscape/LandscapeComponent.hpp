#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x1e0]; public:
    int32_t& get_SectionBaseX();
    int32_t& get_SectionBaseY();
    int32_t& get_ComponentSizeQuads();
    int32_t& get_SubsectionSizeQuads();
    int32_t& get_NumSubsections();
    _Script_Engine::MaterialInterface*& get_OverrideMaterial();
    _Script_Engine::MaterialInterface*& get_OverrideHoleMaterial();
    void* get_OverrideMaterials();
    void* get_MaterialInstances();
    void* get_MaterialInstancesDynamic();
    void* get_LODIndexToMaterialIndex();
    void* get_MaterialIndexToDisabledTessellationMaterial();
    void* get_WeightmapLayerAllocations();
    void* get_WeightmapTextures();
    _Script_Engine::Texture2D*& get_XYOffsetmapTexture();
    void* get_WeightmapScaleBias();
    float& get_WeightmapSubsectionOffset();
    void* get_HeightmapScaleBias();
    _Script_Engine::Texture2D*& get_HeightmapTexture();
    void* get_CachedLocalBox();
    void* get_CollisionComponent();
    void* get_MapBuildDataId();
    void* get_IrrelevantLights();
    int32_t& get_CollisionMipLevel();
    int32_t& get_SimpleCollisionMipLevel();
    float& get_NegativeZBoundsExtension();
    float& get_PositiveZBoundsExtension();
    float& get_StaticLightingResolution();
    int32_t& get_ForcedLOD();
    int32_t& get_LODBias();
    void* get_StateId();
    void* get_BakedTextureMaterialGuid();
    _Script_Engine::Texture2D*& get_GIBakedBaseColorTexture();
    void* get_MobileBlendableLayerMask();
    _Script_Engine::MaterialInterface*& get_MobileMaterialInterface();
    void* get_MobileMaterialInterfaces();
    void* get_MobileWeightmapTextures();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::MaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
}; // Size: 0xd10
#pragma pack(pop)
}
