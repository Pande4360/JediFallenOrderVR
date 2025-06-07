#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "MaterialInstance.hpp"
#include "MaterialInstanceConstant.hpp"
#include "Texture.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialInstanceConstant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInstanceConstant");
    return result;
}
float _Script_Engine::MaterialInstanceConstant::K2_GetScalarParameterValue(void* ParameterName) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::MaterialInstanceConstant::K2_GetVectorParameterValue(void* ParameterName) {
    return;
}
_Script_Engine::Texture* _Script_Engine::MaterialInstanceConstant::K2_GetTextureParameterValue(void* ParameterName) {
    return;
}
