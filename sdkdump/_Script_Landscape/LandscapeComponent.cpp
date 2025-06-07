#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LandscapeComponent.hpp"
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideHoleMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xb48);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_HeightmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xc00);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0xb28);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xb40);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0xb2c);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb30);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb34);
}
int32_t& _Script_Landscape::LandscapeComponent::get_NumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0xb38);
}
void* _Script_Landscape::LandscapeComponent::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0xb50);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0xb60);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstancesDynamic() {
    return (void*)((uintptr_t)this + 0xb70);
}
void* _Script_Landscape::LandscapeComponent::get_LODIndexToMaterialIndex() {
    return (void*)((uintptr_t)this + 0xb80);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialIndexToDisabledTessellationMaterial() {
    return (void*)((uintptr_t)this + 0xb90);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapLayerAllocations() {
    return (void*)((uintptr_t)this + 0xba0);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapTextures() {
    return (void*)((uintptr_t)this + 0xbb0);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_XYOffsetmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xbc0);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0xbd0);
}
float& _Script_Landscape::LandscapeComponent::get_WeightmapSubsectionOffset() {
    return *(float*)((uintptr_t)this + 0xbe0);
}
void* _Script_Landscape::LandscapeComponent::get_HeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0xbf0);
}
void* _Script_Landscape::LandscapeComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0xc08);
}
void* _Script_Landscape::LandscapeComponent::get_CollisionComponent() {
    return (void*)((uintptr_t)this + 0xc24);
}
void* _Script_Landscape::LandscapeComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0xc40);
}
void* _Script_Landscape::LandscapeComponent::get_IrrelevantLights() {
    return (void*)((uintptr_t)this + 0xc50);
}
int32_t& _Script_Landscape::LandscapeComponent::get_CollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0xc60);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SimpleCollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0xc64);
}
float& _Script_Landscape::LandscapeComponent::get_NegativeZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0xc68);
}
float& _Script_Landscape::LandscapeComponent::get_PositiveZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0xc6c);
}
float& _Script_Landscape::LandscapeComponent::get_StaticLightingResolution() {
    return *(float*)((uintptr_t)this + 0xc70);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ForcedLOD() {
    return *(int32_t*)((uintptr_t)this + 0xc74);
}
int32_t& _Script_Landscape::LandscapeComponent::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0xc78);
}
void* _Script_Landscape::LandscapeComponent::get_StateId() {
    return (void*)((uintptr_t)this + 0xc7c);
}
void* _Script_Landscape::LandscapeComponent::get_BakedTextureMaterialGuid() {
    return (void*)((uintptr_t)this + 0xc8c);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_GIBakedBaseColorTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0xca0);
}
void* _Script_Landscape::LandscapeComponent::get_MobileBlendableLayerMask() {
    return (void*)((uintptr_t)this + 0xca8);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_MobileMaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xcb0);
}
void* _Script_Landscape::LandscapeComponent::get_MobileMaterialInterfaces() {
    return (void*)((uintptr_t)this + 0xcb8);
}
void* _Script_Landscape::LandscapeComponent::get_MobileWeightmapTextures() {
    return (void*)((uintptr_t)this + 0xcc8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeComponent");
    return result;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Landscape::LandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
    return;
}
