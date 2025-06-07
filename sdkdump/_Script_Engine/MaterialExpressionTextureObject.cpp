#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpressionTextureBase.hpp"
#include "MaterialExpressionTextureObject.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTextureObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTextureObject");
    return result;
}
