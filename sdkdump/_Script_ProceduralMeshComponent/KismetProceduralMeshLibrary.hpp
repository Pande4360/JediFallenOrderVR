#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_ProceduralMeshComponent {
struct ProceduralMeshComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_ProceduralMeshComponent {
#pragma pack(push, 1)
struct KismetProceduralMeshLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SliceProceduralMesh(_Script_ProceduralMeshComponent::ProceduralMeshComponent* InProcMesh, _Script_CoreUObject::Vector PlanePosition, _Script_CoreUObject::Vector PlaneNormal, bool bCreateOtherHalf, _Script_ProceduralMeshComponent::ProceduralMeshComponent*& OutOtherHalfProcMesh, void* CapOption, _Script_Engine::MaterialInterface* CapMaterial);
    void GetSectionFromStaticMesh(_Script_Engine::StaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents);
    void GetSectionFromProceduralMesh(_Script_ProceduralMeshComponent::ProceduralMeshComponent* InProcMesh, int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents);
    void GenerateBoxMesh(_Script_CoreUObject::Vector BoxRadius, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents);
    void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, void*& Triangles);
    void CopyProceduralMeshFromStaticMeshComponent(_Script_Engine::StaticMeshComponent* StaticMeshComponent, int32_t LODIndex, _Script_ProceduralMeshComponent::ProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
    void ConvertQuadToTriangles(void*& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);
    void CalculateTangentsForMesh(void*& Vertices, void*& Triangles, void*& UVs, void*& Normals, void*& Tangents);
}; // Size: 0x28
#pragma pack(pop)
}
