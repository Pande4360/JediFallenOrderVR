#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MorphTarget.hpp"
#include "SkeletalMesh.hpp"
_Script_Engine::SkeletalMesh*& _Script_Engine::MorphTarget::get_BaseSkelMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::MorphTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MorphTarget");
    return result;
}
