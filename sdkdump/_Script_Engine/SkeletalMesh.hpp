#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshLODSettings;
}
namespace _Script_Engine {
struct SkeletalMeshSocket;
}
namespace _Script_Engine {
struct Blueprint;
}
namespace _Script_Engine {
struct NodeMappingContainer;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMesh : public _Script_CoreUObject::Object {
    private: char pad_28[0x2d0]; public:
    _Script_Engine::Skeleton*& get_Skeleton();
    void* get_ImportedBounds();
    void* get_ExtendedBounds();
    void* get_PositiveBoundsExtension();
    void* get_NegativeBoundsExtension();
    void* get_Materials();
    void* get_SkelMirrorTable();
    void* get_LODInfo();
    void* get_MinLOD();
    void* get_SkelMirrorAxis();
    void* get_SkelMirrorFlipAxis();
    bool get_bUseFullPrecisionUVs();
    void set_bUseFullPrecisionUVs(bool value);
    bool get_bUseHighPrecisionTangentBasis();
    void set_bUseHighPrecisionTangentBasis(bool value);
    bool get_bHasBeenSimplified();
    void set_bHasBeenSimplified(bool value);
    bool get_bHasVertexColors();
    void set_bHasVertexColors(bool value);
    bool get_bEnablePerPolyCollision();
    void set_bEnablePerPolyCollision(bool value);
    _Script_Engine::BodySetup*& get_BodySetup();
    _Script_Engine::PhysicsAsset*& get_PhysicsAsset();
    _Script_Engine::PhysicsAsset*& get_ShadowPhysicsAsset();
    void* get_NodeMappingData();
    void* get_MorphTargets();
    void* get_PostProcessAnimBlueprint();
    void* get_MeshClothingAssets();
    void* get_SamplingInfo();
    void* get_AssetUserData();
    void* get_Sockets();
    static _Script_CoreUObject::Class* static_class();
    void SetLODSettings(_Script_Engine::SkeletalMeshLODSettings* InLODSettings);
    int32_t NumSockets();
    bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
    _Script_Engine::SkeletalMeshSocket* GetSocketByIndex(int32_t Index);
    _Script_Engine::NodeMappingContainer* GetNodeMappingContainer(_Script_Engine::Blueprint* SourceAsset);
    _Script_CoreUObject::BoxSphereBounds GetImportedBounds();
    _Script_CoreUObject::BoxSphereBounds GetBounds();
    _Script_Engine::SkeletalMeshSocket* FindSocketAndIndex(void* InSocketName, int32_t& OutIndex);
    _Script_Engine::SkeletalMeshSocket* FindSocket(void* InSocketName);
}; // Size: 0x2f8
#pragma pack(pop)
}
