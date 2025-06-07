#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "RsActorMotionInterface.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorMotionInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsActorMotionInterface");
    return result;
}
