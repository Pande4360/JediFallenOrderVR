#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Commandlet.hpp"
#include "UpdateAnimNotifiesCommandlet.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::UpdateAnimNotifiesCommandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.UpdateAnimNotifiesCommandlet");
    return result;
}
