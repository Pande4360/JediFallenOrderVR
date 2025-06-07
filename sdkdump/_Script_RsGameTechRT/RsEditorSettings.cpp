#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsEditorSettings.hpp"
float& _Script_RsGameTechRT::RsEditorSettings::get_POICullingDistance() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_RsGameTechRT::RsEditorSettings::get_bLoadHeroAssetsOnEditorStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsEditorSettings::set_bLoadHeroAssetsOnEditorStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsEditorSettings::get_bLoadAIAssetsOnEditorStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsEditorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsEditorSettings");
    return result;
}
void _Script_RsGameTechRT::RsEditorSettings::set_bLoadAIAssetsOnEditorStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
