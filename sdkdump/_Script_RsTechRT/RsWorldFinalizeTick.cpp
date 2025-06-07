#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
#include "RsWorldFinalizeTick.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsWorldFinalizeTick::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsWorldFinalizeTick");
    return result;
}
