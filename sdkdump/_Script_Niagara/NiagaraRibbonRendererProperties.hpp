#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraRibbonRendererProperties : public NiagaraRendererProperties {
    private: char pad_30[0x828]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_FacingMode();
    float& get_UV0TilingDistance();
    void* get_UV0Scale();
    void* get_UV0Offset();
    void* get_UV0AgeOffsetMode();
    float& get_UV1TilingDistance();
    void* get_UV1Scale();
    void* get_UV1Offset();
    void* get_UV1AgeOffsetMode();
    void* get_DrawDirection();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_NormalizedAgeBinding();
    void* get_RibbonTwistBinding();
    void* get_RibbonWidthBinding();
    void* get_RibbonFacingBinding();
    void* get_RibbonIdBinding();
    void* get_RibbonLinkOrderBinding();
    void* get_MaterialRandomBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    int32_t& get_SyncId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x858
#pragma pack(pop)
}
