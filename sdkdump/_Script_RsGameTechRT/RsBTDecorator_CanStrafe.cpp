#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CanStrafe.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CanStrafe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CanStrafe");
    return result;
}
