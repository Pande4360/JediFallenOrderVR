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
struct NiagaraSpriteRendererProperties : public NiagaraRendererProperties {
    private: char pad_30[0x9d0]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_Alignment();
    void* get_FacingMode();
    void* get_CustomFacingVectorMask();
    void* get_PivotInUVSpace();
    void* get_SortMode();
    void* get_SubImageSize();
    bool get_bSubImageBlend();
    void set_bSubImageBlend(bool value);
    bool get_bRemoveHMDRollInVR();
    void set_bRemoveHMDRollInVR(bool value);
    bool get_bSortOnlyWhenTranslucent();
    void set_bSortOnlyWhenTranslucent(bool value);
    float& get_MinFacingCameraBlendDistance();
    float& get_MaxFacingCameraBlendDistance();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_SpriteRotationBinding();
    void* get_SpriteSizeBinding();
    void* get_SpriteFacingBinding();
    void* get_SpriteAlignmentBinding();
    void* get_SubImageIndexBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    void* get_CameraOffsetBinding();
    void* get_UVScaleBinding();
    void* get_MaterialRandomBinding();
    void* get_CustomSortingBinding();
    void* get_NormalizedAgeBinding();
    int32_t& get_SyncId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa00
#pragma pack(pop)
}
