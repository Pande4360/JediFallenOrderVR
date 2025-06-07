#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AimOffsetBlendSpace.hpp"
#include "BlendSpace.hpp"
_Script_CoreUObject::Class* _Script_Engine::AimOffsetBlendSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AimOffsetBlendSpace");
    return result;
}
