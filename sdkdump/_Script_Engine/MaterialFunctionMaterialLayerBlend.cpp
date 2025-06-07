#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunction.hpp"
#include "MaterialFunctionMaterialLayerBlend.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionMaterialLayerBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunctionMaterialLayerBlend");
    return result;
}
