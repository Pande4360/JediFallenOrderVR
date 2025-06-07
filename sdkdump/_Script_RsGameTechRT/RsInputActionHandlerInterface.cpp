#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "RsInputActionHandlerInterface.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsInputActionHandlerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsInputActionHandlerInterface");
    return result;
}
