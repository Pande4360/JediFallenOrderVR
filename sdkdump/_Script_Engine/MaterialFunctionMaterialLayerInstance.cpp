#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunctionInstance.hpp"
#include "MaterialFunctionMaterialLayerInstance.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionMaterialLayerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunctionMaterialLayerInstance");
    return result;
}
