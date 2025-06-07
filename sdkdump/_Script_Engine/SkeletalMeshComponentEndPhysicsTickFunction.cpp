#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshComponentEndPhysicsTickFunction.hpp"
#include "TickFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshComponentEndPhysicsTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshComponentEndPhysicsTickFunction");
    return result;
}
