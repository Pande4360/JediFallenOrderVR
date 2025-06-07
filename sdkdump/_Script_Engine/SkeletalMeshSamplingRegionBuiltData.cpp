#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingRegionBuiltData.hpp"
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingRegionBuiltData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingRegionBuiltData");
    return result;
}
