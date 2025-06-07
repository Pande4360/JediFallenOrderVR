#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureSampleParameter.hpp"
#include "MaterialExpressionTextureSampleParameterCube.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureSampleParameterCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureSampleParameterCube");
    return result;
}
