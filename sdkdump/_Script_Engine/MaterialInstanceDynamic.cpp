#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MaterialInstance.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "Texture.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialInstanceDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInstanceDynamic");
    return result;
}
void _Script_Engine::MaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(_Script_Engine::MaterialInstance* SourceA, _Script_Engine::MaterialInstance* SourceB, float Alpha) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::MaterialInstanceDynamic::K2_GetVectorParameterValue(void* ParameterName) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value) {
    return;
}
_Script_Engine::Texture* _Script_Engine::MaterialInstanceDynamic::K2_GetTextureParameterValue(void* ParameterName) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::SetScalarParameterValue(void* ParameterName, float Value) {
    return;
}
float _Script_Engine::MaterialInstanceDynamic::K2_GetScalarParameterValue(void* ParameterName) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(_Script_Engine::MaterialInterface* Source, bool bQuickParametersOnly) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::CopyParameterOverrides(_Script_Engine::MaterialInstance* MaterialInstance) {
    return;
}
void _Script_Engine::MaterialInstanceDynamic::CopyInterpParameters(_Script_Engine::MaterialInstance* Source) {
    return;
}
