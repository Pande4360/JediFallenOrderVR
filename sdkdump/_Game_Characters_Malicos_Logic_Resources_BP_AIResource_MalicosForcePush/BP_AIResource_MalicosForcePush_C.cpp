#include "..\FUObjectArray.hpp"
#include "BP_AIResource_MalicosForcePush_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters_Malicos_Logic_Resources_BP_AIResource_MalicosForcePush::BP_AIResource_MalicosForcePush_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Malicos/Logic/Resources/BP_AIResource_MalicosForcePush.BP_AIResource_MalicosForcePush_C");
    return result;
}
