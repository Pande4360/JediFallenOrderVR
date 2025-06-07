#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBoneMask.hpp"
#include "RsLayeredBlend_LayerInfo.hpp"
void* _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_LayerName() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsTechRT::RsLayeredBlend_LayerInfo::set_bBlendRotationInMeshSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsTechRT::RsBoneMask*& _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_PerBoneBlendWeights() {
    return *(_Script_RsTechRT::RsBoneMask**)((uintptr_t)this + 0x8);
}
void* _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_BlendIn() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_bIsAdditive() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_BlendOut() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_RsTechRT::RsLayeredBlend_LayerInfo::set_bIsAdditive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_bBlendRotationInMeshSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsLayeredBlend_LayerInfo::get_bBlockNotifiesInLowerLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsLayeredBlend_LayerInfo::set_bBlockNotifiesInLowerLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsLayeredBlend_LayerInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsLayeredBlend_LayerInfo");
    return result;
}
