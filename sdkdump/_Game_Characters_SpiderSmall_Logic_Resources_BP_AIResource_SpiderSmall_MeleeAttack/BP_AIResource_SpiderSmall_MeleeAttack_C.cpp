#include "..\FUObjectArray.hpp"
#include "BP_AIResource_SpiderSmall_MeleeAttack_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters_SpiderSmall_Logic_Resources_BP_AIResource_SpiderSmall_MeleeAttack::BP_AIResource_SpiderSmall_MeleeAttack_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/SpiderSmall/Logic/Resources/BP_AIResource_SpiderSmall_MeleeAttack.BP_AIResource_SpiderSmall_MeleeAttack_C");
    return result;
}
