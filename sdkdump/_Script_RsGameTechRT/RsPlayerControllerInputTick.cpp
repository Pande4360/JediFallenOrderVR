#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
#include "RsPlayerControllerInputTick.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPlayerControllerInputTick::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPlayerControllerInputTick");
    return result;
}
