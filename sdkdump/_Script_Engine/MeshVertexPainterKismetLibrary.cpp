#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "MeshVertexPainterKismetLibrary.hpp"
#include "StaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::MeshVertexPainterKismetLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MeshVertexPainterKismetLibrary");
    return result;
}
void _Script_Engine::MeshVertexPainterKismetLibrary::RemovePaintedVertices(_Script_Engine::StaticMeshComponent* StaticMeshComponent) {
    return;
}
void _Script_Engine::MeshVertexPainterKismetLibrary::PaintVerticesSingleColor(_Script_Engine::StaticMeshComponent* StaticMeshComponent, _Script_CoreUObject::LinearColor& FillColor, bool bConvertToSRGB) {
    return;
}
void _Script_Engine::MeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(_Script_Engine::StaticMeshComponent* StaticMeshComponent, _Script_CoreUObject::LinearColor& StartColor, _Script_CoreUObject::LinearColor& EndColor, void* Axis, bool bConvertToSRGB) {
    return;
}
