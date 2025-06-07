#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
#include "RsCharacterDamageDataClearTickFunction.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterDamageDataClearTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterDamageDataClearTickFunction");
    return result;
}
