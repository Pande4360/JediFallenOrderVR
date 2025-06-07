#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InstancedStaticMeshMappingInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshMappingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InstancedStaticMeshMappingInfo");
    return result;
}
