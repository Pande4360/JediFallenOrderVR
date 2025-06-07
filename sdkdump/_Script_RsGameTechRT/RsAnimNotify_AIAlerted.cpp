#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_AIAlerted.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotify_AIAlerted::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotify_AIAlerted");
    return result;
}
