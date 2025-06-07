#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RigidBodyBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::RigidBodyBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RigidBodyBase");
    return result;
}
