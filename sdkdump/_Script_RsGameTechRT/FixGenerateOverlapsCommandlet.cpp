#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Commandlet.hpp"
#include "FixGenerateOverlapsCommandlet.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::FixGenerateOverlapsCommandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.FixGenerateOverlapsCommandlet");
    return result;
}
