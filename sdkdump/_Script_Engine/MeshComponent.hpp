#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshComponent : public PrimitiveComponent {
    private: char pad_b30[0x30]; public:
    void* get_OverrideMaterials();
    static _Script_CoreUObject::Class* static_class();
    void SetVectorParameterValueOnMaterials(void* ParameterName, _Script_CoreUObject::Vector ParameterValue);
    void SetScalarParameterValueOnMaterials(void* ParameterName, float ParameterValue);
    void SetScalarParameterValueListOnMaterials(void*& ParameterNames, void*& ParameterValues);
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);
    bool IsMaterialSlotNameValid(void* MaterialSlotName);
    void* GetMaterialSlotNames();
    void* GetMaterials();
    int32_t GetMaterialIndex(void* MaterialSlotName);
}; // Size: 0xb60
#pragma pack(pop)
}
