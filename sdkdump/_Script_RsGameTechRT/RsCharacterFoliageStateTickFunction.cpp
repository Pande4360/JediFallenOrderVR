#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickFunction.hpp"
#include "RsCharacterFoliageStateTickFunction.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterFoliageStateTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterFoliageStateTickFunction");
    return result;
}
