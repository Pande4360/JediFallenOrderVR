#include "..\FUObjectArray.hpp"
#include "BP_AIResource_CrabRoll_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters_Crab00_Logic_Resources_BP_AIResource_CrabRoll::BP_AIResource_CrabRoll_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Crab00/Logic/Resources/BP_AIResource_CrabRoll.BP_AIResource_CrabRoll_C");
    return result;
}
