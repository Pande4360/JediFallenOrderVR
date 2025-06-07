#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "AnimNotify_ConvertToRagdoll.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimNotify_ConvertToRagdoll::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.AnimNotify_ConvertToRagdoll");
    return result;
}
