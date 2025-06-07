#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureObjectParameter.hpp"
#include "MaterialExpressionTextureSampleParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureObjectParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureObjectParameter");
    return result;
}
