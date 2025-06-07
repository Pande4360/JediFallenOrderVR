#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshComponentDebugTickFunction.hpp"
#include "TickFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshComponentDebugTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshComponentDebugTickFunction");
    return result;
}
