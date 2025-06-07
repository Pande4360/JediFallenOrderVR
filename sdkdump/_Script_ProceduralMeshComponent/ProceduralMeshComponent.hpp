#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ProceduralMeshComponent {
#pragma pack(push, 1)
struct ProceduralMeshComponent : public _Script_Engine::MeshComponent {
    private: char pad_b60[0x70]; public:
    bool get_bUseComplexAsSimpleCollision();
    void set_bUseComplexAsSimpleCollision(bool value);
    bool get_bUseAsyncCooking();
    void set_bUseAsyncCooking(bool value);
    _Script_Engine::BodySetup*& get_ProcMeshBodySetup();
    void* get_ProcMeshSections();
    void* get_CollisionConvexElems();
    void* get_LocalBounds();
    void* get_AsyncBodySetupQueue();
    static _Script_CoreUObject::Class* static_class();
    void UpdateMeshSection_LinearColor(int32_t SectionIndex, void*& Vertices, void*& Normals, void*& UV0, void*& UV1, void*& UV2, void*& UV3, void*& VertexColors, void*& Tangents);
    void UpdateMeshSection(int32_t SectionIndex, void*& Vertices, void*& Normals, void*& UV0, void*& VertexColors, void*& Tangents);
    void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32_t SectionIndex);
    int32_t GetNumSections();
    void CreateMeshSection_LinearColor(int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UV0, void*& UV1, void*& UV2, void*& UV3, void*& VertexColors, void*& Tangents, bool bCreateCollision);
    void CreateMeshSection(int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UV0, void*& VertexColors, void*& Tangents, bool bCreateCollision);
    void ClearMeshSection(int32_t SectionIndex);
    void ClearCollisionConvexMeshes();
    void ClearAllMeshSections();
    void AddCollisionConvexMesh(void* ConvexVerts);
}; // Size: 0xbd0
#pragma pack(pop)
}
