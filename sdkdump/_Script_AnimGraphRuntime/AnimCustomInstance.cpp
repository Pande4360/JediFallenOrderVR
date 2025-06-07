#include "..\FUObjectArray.hpp"
#include "AnimCustomInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimCustomInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimCustomInstance");
    return result;
}
