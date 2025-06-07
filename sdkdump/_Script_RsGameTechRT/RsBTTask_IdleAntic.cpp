#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_IdleAntic.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_IdleAntic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_IdleAntic");
    return result;
}
