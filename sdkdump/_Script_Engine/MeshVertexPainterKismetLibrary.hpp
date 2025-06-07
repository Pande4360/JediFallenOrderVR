#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshVertexPainterKismetLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void RemovePaintedVertices(_Script_Engine::StaticMeshComponent* StaticMeshComponent);
    void PaintVerticesSingleColor(_Script_Engine::StaticMeshComponent* StaticMeshComponent, _Script_CoreUObject::LinearColor& FillColor, bool bConvertToSRGB);
    void PaintVerticesLerpAlongAxis(_Script_Engine::StaticMeshComponent* StaticMeshComponent, _Script_CoreUObject::LinearColor& StartColor, _Script_CoreUObject::LinearColor& EndColor, void* Axis, bool bConvertToSRGB);
}; // Size: 0x28
#pragma pack(pop)
}
