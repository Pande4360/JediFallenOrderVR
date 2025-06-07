#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct NavCollisionBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMesh : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    void* get_MinLOD();
    float& get_LpvBiasMultiplier();
    void* get_StaticMaterials();
    float& get_LightmapUVDensity();
    int32_t& get_LightMapResolution();
    int32_t& get_LightMapCoordinateIndex();
    float& get_DistanceFieldSelfShadowBias();
    _Script_Engine::BodySetup*& get_BodySetup();
    int32_t& get_LODForCollision();
    bool get_bGenerateMeshDistanceField();
    void set_bGenerateMeshDistanceField(bool value);
    bool get_bStripComplexCollisionForConsole();
    void set_bStripComplexCollisionForConsole(bool value);
    bool get_bHasNavigationData();
    void set_bHasNavigationData(bool value);
    bool get_bSupportUniformlyDistributedSampling();
    void set_bSupportUniformlyDistributedSampling(bool value);
    bool get_bAllowCPUAccess();
    void set_bAllowCPUAccess(bool value);
    bool get_bDisableCollisionOnSpawn();
    void set_bDisableCollisionOnSpawn(bool value);
    void* get_Sockets();
    void* get_PositiveBoundsExtension();
    void* get_NegativeBoundsExtension();
    void* get_ExtendedBounds();
    int32_t& get_ElementToIgnoreForTexFactor();
    void* get_AssetUserData();
    _Script_CoreUObject::Object*& get_EditableMesh();
    _Script_Engine::NavCollisionBase*& get_NavCollision();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetNumSections(int32_t InLOD);
    int32_t GetNumLODs();
    int32_t GetMaterialIndex(void* MaterialSlotName);
    _Script_Engine::MaterialInterface* GetMaterial(int32_t MaterialIndex);
    _Script_CoreUObject::BoxSphereBounds GetBounds();
    _Script_CoreUObject::Box GetBoundingBox();
}; // Size: 0x118
#pragma pack(pop)
}
