#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MaterialShaderQualitySettings.hpp"
void* _Script_MaterialShaderQualitySettings::MaterialShaderQualitySettings::get_ForwardSettingMap() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MaterialShaderQualitySettings::MaterialShaderQualitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings");
    return result;
}
