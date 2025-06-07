#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsLightTriggerMaterialIndexPair.hpp"
int32_t& _Script_Engine::RsLightTriggerMaterialIndexPair::get_ComponentMaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::RsLightTriggerMaterialIndexPair::get_MaterialInstanceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::RsLightTriggerMaterialIndexPair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsLightTriggerMaterialIndexPair");
    return result;
}
