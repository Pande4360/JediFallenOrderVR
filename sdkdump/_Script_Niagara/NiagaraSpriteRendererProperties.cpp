#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraRendererProperties.hpp"
#include "NiagaraSpriteRendererProperties.hpp"
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SubImageSize() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraSpriteRendererProperties::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_Alignment() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_PivotInUVSpace() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0x39);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_CustomFacingVectorMask() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SortMode() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bSubImageBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bSubImageBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x968);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bRemoveHMDRollInVR() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bRemoveHMDRollInVR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraSpriteRendererProperties::get_bSortOnlyWhenTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraSpriteRendererProperties::set_bSortOnlyWhenTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Niagara::NiagaraSpriteRendererProperties::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteRotationBinding() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteSizeBinding() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteFacingBinding() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SpriteAlignmentBinding() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_SubImageIndexBinding() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_CustomSortingBinding() {
    return (void*)((uintptr_t)this + 0x8d8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_CameraOffsetBinding() {
    return (void*)((uintptr_t)this + 0x728);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_UVScaleBinding() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void* _Script_Niagara::NiagaraSpriteRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x848);
}
int32_t& _Script_Niagara::NiagaraSpriteRendererProperties::get_SyncId() {
    return *(int32_t*)((uintptr_t)this + 0x9f8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSpriteRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSpriteRendererProperties");
    return result;
}
