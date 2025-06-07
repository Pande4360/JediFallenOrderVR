#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_WaitForLinkedPOIs.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_WaitForLinkedPOIs::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_WaitForLinkedPOIs");
    return result;
}
