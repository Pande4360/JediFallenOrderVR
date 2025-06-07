#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "KismetProceduralMeshLibrary.hpp"
#include "ProceduralMeshComponent.hpp"
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(_Script_Engine::StaticMeshComponent* StaticMeshComponent, int32_t LODIndex, _Script_ProceduralMeshComponent::ProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision) {
    return;
}
_Script_CoreUObject::Class* _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary");
    return result;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::SliceProceduralMesh(_Script_ProceduralMeshComponent::ProceduralMeshComponent* InProcMesh, _Script_CoreUObject::Vector PlanePosition, _Script_CoreUObject::Vector PlaneNormal, bool bCreateOtherHalf, _Script_ProceduralMeshComponent::ProceduralMeshComponent*& OutOtherHalfProcMesh, void* CapOption, _Script_Engine::MaterialInterface* CapMaterial) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::ConvertQuadToTriangles(void*& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::GetSectionFromStaticMesh(_Script_Engine::StaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::GetSectionFromProceduralMesh(_Script_ProceduralMeshComponent::ProceduralMeshComponent* InProcMesh, int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::GenerateBoxMesh(_Script_CoreUObject::Vector BoxRadius, void*& Vertices, void*& Triangles, void*& Normals, void*& UVs, void*& Tangents) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, void*& Triangles) {
    return;
}
void _Script_ProceduralMeshComponent::KismetProceduralMeshLibrary::CalculateTangentsForMesh(void*& Vertices, void*& Triangles, void*& UVs, void*& Normals, void*& Tangents) {
    return;
}
