#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAnimationAsset.hpp"
void* _Script_RsTechRT::RsAnimationAsset::get_Path() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RsTechRT::RsAnimationAsset::get_m_assetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Object*& _Script_RsTechRT::RsAnimationAsset::get_Asset() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x18);
}
void* _Script_RsTechRT::RsAnimationAsset::get_Name() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_RsTechRT::RsAnimationAsset::get_m_pathOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimationAsset::set_m_pathOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimationAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimationAsset");
    return result;
}
