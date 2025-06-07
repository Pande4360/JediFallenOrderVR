#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLightTriggerComponentMaterialMapping.hpp"
void* _Script_Engine::RsLightTriggerComponentMaterialMapping::get_MaterialIndices() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsLightTriggerComponentMaterialMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsLightTriggerComponentMaterialMapping");
    return result;
}
