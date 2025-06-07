#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunction.hpp"
#include "MaterialFunctionMaterialLayer.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionMaterialLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunctionMaterialLayer");
    return result;
}
