#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ShaderPlatformQualitySettings.hpp"
void* _Script_MaterialShaderQualitySettings::ShaderPlatformQualitySettings::get_QualityOverrides() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MaterialShaderQualitySettings::ShaderPlatformQualitySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
    return result;
}
