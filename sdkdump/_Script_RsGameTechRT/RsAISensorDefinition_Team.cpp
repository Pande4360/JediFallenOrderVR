#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensorDefinition.hpp"
#include "RsAISensorDefinition_Team.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorDefinition_Team::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorDefinition_Team");
    return result;
}
